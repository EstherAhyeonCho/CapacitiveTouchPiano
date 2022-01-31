/*
 credit: Mr.ElectroUino
 Modified by Esther Cho

 Built a capacitive touch piano with Arduino Uno by using aluminum foil keys
 Note plays when touched by finger
*/

#include <CapacitiveSensor.h>
#define buzzer 13

// Set the Send Pin & Receive Pin.
CapacitiveSensor   cs_12_0 = CapacitiveSensor(12,0);       
CapacitiveSensor   cs_12_1 = CapacitiveSensor(12,1);        
CapacitiveSensor   cs_12_2 = CapacitiveSensor(12,2);  
CapacitiveSensor   cs_12_3 = CapacitiveSensor(12,3);       
CapacitiveSensor   cs_12_4 = CapacitiveSensor(12,4);        
CapacitiveSensor   cs_12_5 = CapacitiveSensor(12,5);    
CapacitiveSensor   cs_12_6 = CapacitiveSensor(12,6);    
CapacitiveSensor   cs_12_7 = CapacitiveSensor(12,7);     
CapacitiveSensor   cs_12_8 = CapacitiveSensor(12,8);        
CapacitiveSensor   cs_12_9 = CapacitiveSensor(12,9); 
CapacitiveSensor   cs_12_10 = CapacitiveSensor(12,10);    
CapacitiveSensor   cs_12_11 = CapacitiveSensor(12,11);    


void setup()                   
{
  // turn off autocalibrate on channel 1 - just as an example
  cs_12_0.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_1.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_3.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_4.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_5.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_6.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_7.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_8.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_9.set_CS_AutocaL_Millis(0xFFFFFFFF);    
  cs_12_10.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_11.set_CS_AutocaL_Millis(0xFFFFFFFF);
}

void loop()                   
{
  // Set the sensitivity of the sensors.
  long touch0 =  cs_12_0.capacitiveSensor(1000);
  long touch1 =  cs_12_1.capacitiveSensor(1000);
  long touch2 =  cs_12_2.capacitiveSensor(1000);
  long touch3 =  cs_12_3.capacitiveSensor(1000);
  long touch4 =  cs_12_4.capacitiveSensor(1000);
  long touch5 =  cs_12_5.capacitiveSensor(1000);
  long touch6 =  cs_12_6.capacitiveSensor(1000);
  long touch7 =  cs_12_7.capacitiveSensor(1000);
  long touch8 =  cs_12_8.capacitiveSensor(1000);
  long touch9 =  cs_12_9.capacitiveSensor(1000);
  long touch10 =  cs_12_10.capacitiveSensor(1000);
  long touch11 =  cs_12_11.capacitiveSensor(1000);
 
  //Notes: C4-B4
  if (touch0 > 1000){
    tone(buzzer,261);
    } 
  if (touch1 > 1000){
    tone(buzzer,277);
    } 
  if (touch2 > 1000){
    tone(buzzer,294);
    }
  if (touch3 > 1000) {
    tone(buzzer,311);
    }
  if (touch4 > 1000) {
    tone(buzzer,330);
    }
  if (touch5 > 1000){
    tone(buzzer,349);
    }
  if (touch6 > 1000){
    tone(buzzer,370);
    }
  if (touch7 > 1000){
    tone(buzzer,392);
    }
  if (touch8 > 1000){
    tone(buzzer,415);
    }
  if (touch9 > 1000){
    tone(buzzer,440);
    } 
  if (touch10 > 1000){
    tone(buzzer,466);
    } 
  if (touch11 > 1000){
    tone(buzzer,494);
    }
    
  if (touch0<=1000  &  touch1<=1000  &  touch2<=1000 & touch3<=1000  &  touch4<=1000  &  touch5<=1000 &  touch6<=1000 &  touch7<=1000 & touch8<=1000  &  touch9<=1000  &  touch10<=1000 & touch11<=1000){
    noTone(buzzer);
  delay(10);
  }
 }
