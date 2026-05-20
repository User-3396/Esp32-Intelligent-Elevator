#ifndef HALL_H
#define HALL_H

// #include <Arduino.h>
// #include "mqttClient.h"   // usa sua classe MQTTClient

class Hall {
  private:
    //MQTTClient mqtt;         // cliente MQTT específico do Hall
    const char* _mqttClient;         
    const int _FLOOR;             // andar do hall
    int _floorCabin;              // andar da cabine
    char* _cabinState;

  public:
    Hall(const int andar);//, const int botaoPin, const int ledPin);
    void begin();
    void loop();
    void getMessage (char* topic, byte* payload, unsigned int length);
    //const int getButton ();
    const int call ();
    // Getters:
    char* getCabinState ();
    int getFloorCabin (int andar);
    // Setters:
    void setFloorCabin (int andar);
    void setCabinState (char* newState);
};

#endif
