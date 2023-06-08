/*
  Blink 2-4-6-8-10  using arrays
  by opiedopy, May 30, 2023

  Turns on 5 LEDs on for "led_delay" millisecond each, 
      then off for same amount, repeatedly.
*/
int myArray[] = {2, 4, 6, 8, 10, 8, 6, 4}; // 0 position = Led2, second Led4 is position 7
                // 8 position array, 0 thru 7 numbered.

int led_delay = 100;   // these are milliseconds, 100ms = 100/1000 = 1/10 second
                      
void setup() {
  // initialize 5 digital pins as outputs, poistion 0 thru 4, leds 2,4,6,8,10.
  for(int i=0; i<5; i++){
      pinMode(myArray[i], OUTPUT);
}
}
void loop() {

 for(int i=0; i<8; i++)  // this "for" loop lights LEDs 2-4-6-8-10-8-6-4
{
  digitalWrite(myArray[i], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(led_delay);   // delay
  
  digitalWrite(myArray[i], LOW);    // turn the LED off by making the voltage LOW
  delay(led_delay);   // delay
}
}
