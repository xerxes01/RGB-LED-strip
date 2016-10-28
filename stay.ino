
int blue=3;
int green =2;   
int brightness = 0; 
int fade = 5; 

// the setup routine runs once when you press reset:
void setup() {
  
  pinMode(blue, OUTPUT);
  pinMode(green,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  analogWrite(blue,255);
  
  analogWrite(green, brightness);

  
  brightness = brightness + fade;

  
  if (brightness <= 0 || brightness >= 255) {
    fade = -fade;
  }
  
  delay(1000);
}
