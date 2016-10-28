int red=7;
int green=8;
int blue=9;
int threshold=1000;
int volume;

void setup() {
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);

}
void loop() {
  volume=analogRead(A0);
  Serial.println(volume);
  delay(100);
  
  if(volume<=threshold){
    analogWrite(red,255);
    analogWrite(green,255);
    delay(100);
    analogWrite(red,0);
    analogWrite(green,0);
  }
  else{
    analogWrite(blue,255);
    
  }

}
