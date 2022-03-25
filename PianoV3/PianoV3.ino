/* PAPER PIANO V3.0
 * By- Soumojit Ash, if need help contatc me - soumojitash@gmail.com
 * 
 * This piano works by capacitive sensing. The piano have 2 octaves and a last C note, you can set the notes of the keys in the code below
 * Also you can change capacitive sensor values according to your keys.
 *
 *  
 */

// Import pitches.h
#include "pitches.h" 
// Import the CapacitiveSensor Library.
#include <CapacitiveSensor.h>


// Name the pin as speaker. 
#define speaker 13


// Set the Send Pin & Receive Pin.
CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        // 1M resistor between pins 2 & 3 
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);        // 1M resistor between pins 2 & 4
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);        // 1M resistor between pins 2 & 5
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);        // 1M resistor between pins 2 & 6 
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);        // 1M resistor between pins 2 & 7
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);        // 1M resistor between pins 2 & 8 
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);        // 1M resistor between pins 2 & 9
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);      // 1M resistor between pins 2 & 10 
CapacitiveSensor   cs_2_11 = CapacitiveSensor(2,11);      // 1M resistor between pins 2 & 11 
CapacitiveSensor   cs_2_12 = CapacitiveSensor(2,12);      // 1M resistor between pins 2 & 12
CapacitiveSensor   cs_2_14 = CapacitiveSensor(2,14);      // 1M resistor between pins 2 & 14 
CapacitiveSensor   cs_2_15 = CapacitiveSensor(2,15);      // 1M resistor between pins 2 & 15 
CapacitiveSensor   cs_2_16 = CapacitiveSensor(2,16);      // 1M resistor between pins 2 & 16
CapacitiveSensor   cs_2_17 = CapacitiveSensor(2,17);      // 1M resistor between pins 2 & 17
CapacitiveSensor   cs_2_18 = CapacitiveSensor(2,18);      // 1M resistor between pins 2 & 18

void setup()                    
{
  cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
  
  // Arduino start communicate with computer.
  Serial.begin(9600);
}

void loop()                    
{
  // Set a timer.
  long start = millis();
  
  // Set the sensitivity of the sensors.
  long total1 =  cs_2_3.capacitiveSensor(30);
  long total2 =  cs_2_4.capacitiveSensor(30);
  long total3 =  cs_2_5.capacitiveSensor(30);
  long total4 =  cs_2_6.capacitiveSensor(30);
  long total5 =  cs_2_7.capacitiveSensor(30);
  long total6 =  cs_2_8.capacitiveSensor(30);
  long total7 =  cs_2_9.capacitiveSensor(30);
  long total8 =  cs_2_10.capacitiveSensor(30);
  long total9 =  cs_2_11.capacitiveSensor(30);
  long total10 =  cs_2_12.capacitiveSensor(30);
  long total11 =  cs_2_14.capacitiveSensor(30);          
  long total12 =  cs_2_15.capacitiveSensor(30);
  long total13 =  cs_2_16.capacitiveSensor(30);
  long total14 =  cs_2_17.capacitiveSensor(30);
  long total15 =  cs_2_18.capacitiveSensor(30);
  
  Serial.print(millis() - start);        // check on performance in milliseconds
  Serial.print("\t");                    // tab character for debug windown spacing

  Serial.print(total1);                  // print sensor output 1
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total2);                  // print sensor output 2
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total3);                  // print sensor output 3
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total4);                  // print sensor output 4
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total5);                  // print sensor output 5
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total6);                  // print sensor output 6
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total7);                  // print sensor output 7
  Serial.print("\t");                    // Leave some space before print the next output               
  Serial.print(total8);                  // print sensor output 8
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total9);                  // print sensor output 9
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total10);                 // print sensor output 10
  Serial.print("\t");                    // Leave some space before print the next output 
  Serial.print(total11);                 // print sensor output 11
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total12);                 // print sensor output 12
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total13);                 // print sensor output 13
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(total14);                 // print sensor output 14
  Serial.print("\t");                    // Leave some space before print the next output                   
  Serial.println(total15);               // print sensor output 15
                                         //"println" - "ln" represent as "line", system will jump to next line after print the output.
  
  
  
  // When hand is touched the sensor, the speaker will produce a tone.
  // Edit those as sensitivity  your needs.
  //Also you can chnage notes here, check the pitches.h for other notes
  if (total1 > 8000) tone(speaker,NOTE_C4);
  if (total2 > 8000) tone(speaker,NOTE_D4);
  if (total3 > 8000) tone(speaker,NOTE_E4);
  if (total4 > 8000) tone(speaker,NOTE_F4);
  if (total5 > 8000) tone(speaker,NOTE_G4);
  if (total6 > 8000) tone(speaker,NOTE_A4);
  if (total7 > 8000) tone(speaker,NOTE_B4);
  if (total8 > 8000) tone(speaker,NOTE_C5);
  if (total9 > 8000) tone(speaker,NOTE_D5);
  if (total10 > 8000) tone(speaker,NOTE_E5);
  if (total11 > 8000) tone(speaker,NOTE_F5);
  if (total12 > 8000) tone(speaker,NOTE_G5);
  if (total13 > 8000) tone(speaker,NOTE_A5);
  if (total14 > 8000) tone(speaker,NOTE_B5);
  if (total15 > 8000) tone(speaker,NOTE_C6);

  
  // When hand didn't touch on it, no tone is produced.
  if (total1<=5000  &  total2<=5000  &  total3<=5000 & total4<=5000  &  total5<=5000  &  total6<=5000 &
   total7<=5000 &  total8<=5000 & total9<=5000 & total10<=5000 & total11<=5000 & total12<=5000 & total13<=5000 
   & total14<=5000 & total15<=5000)
    noTone(speaker);

  delay(10);                             // arbitrary delay to limit data to serial port 
}
