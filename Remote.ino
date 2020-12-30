#include <IRremote.h>
int RECV_PIN = 11;
int data;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  //Serial.println("IREnabled");
}

void loop() {
  if(irrecv.decode(&results))
  {
       data = results.value;
      //Serial.print("Data: ");
      //Serial.println(data);
      irrecv.resume();
      if(data==8415)
      {
        Serial.println("7");
      }
      if(data==-32641)
      {
        Serial.println("4");
      }
      if(data==4335)
      {
        Serial.println("10");
      }
      if(data==-28561)
      {
        Serial.println("11");
      }
      if(data==24735)
      {
        Serial.println("9");
      }
      if(data==-24481)
      {
        Serial.println("8");
      }
      if(data==-16321)
      {
        Serial.println("6");
      }
      if(data==16575)
      {
        Serial.println("5");
      }
      if(data==22695)
      {
        Serial.println("2");
      }
      if(data==18615)
      {
        Serial.println("1");
      }
      if(data==30855)
      {
        Serial.println("3");
      }
  }
  delay(100);
}
