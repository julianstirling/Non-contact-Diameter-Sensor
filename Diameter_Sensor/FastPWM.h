                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            /*
  Timer.h - Library for for setting up timers 1,
  for fast PWM which are used for generating the step signal
  for the motors;
      
  Created by Matthew P. Rogge, Jan 10, 2017.
  Released into the public domain.
*/
#ifndef FastPWM_h
#define FastPWM_h

#include "Arduino.h"


class FastPWM
{
  public:
    void setFrequency(float frequency);
    //float getFrequency();
    void off();// sets mode to normal.
    float _frequency;
  private:
    //int _timerNumber = 1;
    
};

#endif
