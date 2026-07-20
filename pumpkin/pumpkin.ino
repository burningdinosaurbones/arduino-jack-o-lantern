/*
  Blink LEDs for jack-o-lantern
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi

  modified 30 Oct 2022 
  by burningdinosaurbones
*/

  int blue_pin=7;
  int red_pin=6;
  int white_pin=5;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // setup additional pins for colored LEDs
  pinMode(blue_pin,OUTPUT);
  pinMode(red_pin,OUTPUT);
  pinMode(white_pin,OUTPUT);
  digitalWrite(blue_pin,LOW);
  digitalWrite(red_pin,LOW);
  digitalWrite(white_pin,LOW);
  // wait after startup
  delay(1000);
}

// the loop function runs over and over again forever
void loop() {
  int k;
  // first blink
  k=0;
  while(k<3)
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(blue_pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(blue_pin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  k++;
  }


  // second blink
  k=0;
  while(k<3)
  {
   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(red_pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(red_pin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
   k++;
  }

  // third blink
   k=0;
  while(k<3)
  {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(white_pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(white_pin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
    k++;
  }


    // all blink
   k=0;
  while(k<3)
  {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(blue_pin, HIGH);
 digitalWrite(red_pin, HIGH);
  digitalWrite(white_pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(blue_pin, LOW);
 digitalWrite(red_pin, LOW);
 digitalWrite(white_pin, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
    k++;
  }

  delay(200);
  //end
  // while(1 == 1) {
  //   delay(100);
  // }
  
}
