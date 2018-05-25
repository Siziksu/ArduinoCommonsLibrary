#ifndef Commons_h
#define Commons_h

#include <Arduino.h>

/**
  * Button object.
  *
  * @param pin      Pin Number
  * @param debounce Time of debounce
  */
class Button {
  public:
    Button(byte pin, byte debounce);
    byte pin();
    byte pressed();

  private:
    byte _pin;
    byte _debounce;
    byte _previous;
    byte _current;
};

/**
  * Led object.
  *
  * @param pin Pin Number
  * @param on  Led on or off
  */
class Led {
  public:
    Led(byte pin, boolean on);
    byte pin();
    void on();
    void off();

  private:
    byte _pin;
};

/**
  * Buzzer object.
  *
  * @param pin Pin Number
  */
class Buzzer {
  public:
    Buzzer(byte pin);
    byte pin();
    void buzz();
    void stopBuzz();
    void playTone(uint16_t frequency, uint32_t duration = 0);
    void stopTone();

  private:
    byte _pin;
};

/**
  * Ultrasonic object.
  *
  * @param trigger Pin Number
  * @param echo    Pin Number
  */
class Ultrasonic {
  public:
    Ultrasonic(byte trigger, byte echo);
    void trigger();
    long echoTime();
    int distance(long time);

  private:
    byte _pinTrigger;
    byte _pinEcho;
};
#endif

