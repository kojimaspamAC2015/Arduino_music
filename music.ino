const int loudspeaker_pin=13;
const int base_time=16*50;
void setup() {
  // put your setup code here, to run once:
  pinMode(loudspeaker_pin, OUTPUT);
}

void loop() 
{tone(loudspeaker_pin, 440);
delay(base_time * 3 / 2 / 2);
tone(loudspeaker_pin, 494);
delay(base_time / 2);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 349);
delay(base_time / 2);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 349);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time * 3 / 2 / 2);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 349);
delay(base_time / 4);
tone(loudspeaker_pin, 349);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 2);
tone(loudspeaker_pin, 349);
delay(base_time / 4);
tone(loudspeaker_pin, 349);
delay(base_time / 4);
tone(loudspeaker_pin, 494);
delay(base_time / 4);
tone(loudspeaker_pin, 494);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time * 3 / 2 / 2);
tone(loudspeaker_pin, 587);
delay(base_time / 4);
tone(loudspeaker_pin, 587);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 2);
tone(loudspeaker_pin, 349);
delay(base_time / 4);
tone(loudspeaker_pin, 349);
delay(base_time / 4);
tone(loudspeaker_pin, 494);
delay(base_time / 4);
tone(loudspeaker_pin, 494);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 349);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 294);
delay(base_time * 3 / 2 / 2);
}


