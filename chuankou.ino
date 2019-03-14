#include<SoftwareSerial.h>
SoftwareSerial BluetoothSerial(8,9);//3A：46 ，9：RX
char value;
void setup(){
  Serial.begin(38400);
  Serial.println("Serial Connected!");
  BluetoothSerial.begin(38400);
}

void loop(){
  if(Serial.available()){
    value = Serial.read();
    //Serial.print(value);
    BluetoothSerial.write(value);
  }
  if(BluetoothSerial.available()){
    value = BluetoothSerial.read();
    Serial.print(value);
    //Serial.println("123456");
  }
 
}
