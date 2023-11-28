#include "index.h"
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <Servo.h>
#include <NTPClient.h>
#include <WiFiUdp.h>





class Motion{
  public:
    Motion();
    void drop_piece(int piece);
    void set_null(bool is_null);
    void set_max_angl(int angle);
  private:
    int angle = 0;
    Servo myservo;
};

Motion::Motion(){

}

void Motion::drop_piece(int piece){

}

void Motion::set_null(bool is_null){

}

void Motion::set_max_angl(int angle){

}




class Web{
  public:
    Web();

  private:
    const char *ssid = "iPhone (Nikita)";
    const char *password = "qwerty1177";

    AsyncWebServer hserver;
};

Web::Web() : hserver(80){
  
}

class Time{
  public:
    Time();
    int get_hour();
    int get_minute();
    String get_time();
  private:
    const long utcOffsetInSeconds = 3*60*60;
    String time;
    int minute, hour;

    void parcetime();
    WiFiUDP ntpUDP;
    NTPClient timeClient;
};

Time::Time() : timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds){
  timeClient.begin();
  timeClient.setTimeOffset(3600*3);
}

String Time::get_time(){
  timeClient.update();
  this->time = timeClient.getFormattedTime();
  return time;
}

int Time::get_minute(){
  parcetime();
  return this->minute;
}

int Time::get_hour(){
  parcetime();
  return hour;
}

void Time::parcetime(){
  timeClient.update();
  this->time = timeClient.getFormattedTime();
  char charArray[this->time.length() + 1];
  time.toCharArray(charArray, sizeof(charArray));
  this->hour = atoi(strtok(charArray, ":"));
  this->minute = atoi(strtok(NULL, ":"));
}


Time current;

void setup(){
  Serial.begin(115200);
   Serial.println("iPhone");
  WiFi.begin("iPhone (Nikita)", "qwerty1177");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(WiFi.localIP());
}
  
void loop() {
  Serial.println(current.get_time());
}