
/* 
 *  Scale hardware controller code.
 *     
 *  Usage:
 *  Call getScaleValue() to get the current debounced scale value in the
 *  range of 0-1024. The value is updated every 1000ms via an interrupt.
 *  
 */

extern "C" {
  #include "user_interface.h"
}

os_timer_t scaleTimer;
unsigned int currentScaleValue;

unsigned int getScaleValue() {
  return currentScaleValue;
}

void scaleTimerCallback(void *pArg) {
  // Do not use “serial print” commands in an ISR.  
  // The serial commands also use interrupts and using them 
  // can hang the processor.

  // It is good practice to disable interrupts in an ISR 
  os_intr_lock();

  // read scale, debounce result
  unsigned int result = 0;
  for (int i=0; i<500; i++)
    result += analogRead(A0);
  currentScaleValue = result/500;

  // enable interrupts again
  os_intr_unlock();
}


void setupScale() {
 /*
  os_timer_setfn - Define a function to be called when the timer fires

  void os_timer_setfn(
      os_timer_t *pTimer,
      os_timer_func_t *pFunction,
      void *pArg)

  Define the callback function that will be called when the timer 
  reaches zero. The pTimer parameters is a pointer to the timer control 
  structure.

  The pFunction parameters is a pointer to the callback function.

  The pArg parameter is a value that will be passed into the called 
  back function. The callback function should have the signature:
  
  void (*functionName)(void *pArg)

  The pArg parameter is the value registered with the callback function.
  */
  os_timer_setfn(&scaleTimer, scaleTimerCallback, NULL);

  /*
    os_timer_arm -  Enable a millisecond granularity timer.

    void os_timer_arm(
      os_timer_t *pTimer,
      uint32_t milliseconds,
      bool repeat)

    Arm a timer such that is starts ticking and fires when the 
    clock reaches zero.

    The pTimer parameter is a pointed to a timer control 
    structure.
    The milliseconds parameter is the duration of the timer 
    measured in milliseconds. The repeat parameter is whether 
    or not the timer will restart once it has reached zero.
  */
  os_timer_arm(&scaleTimer, 1000, true);
}

