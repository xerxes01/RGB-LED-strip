
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;


const int max_red = 255;
const int max_green = 90;
const int max_blue = 100;

byte colors[3] = {0, 0, 0};
byte lineEnding = 0x0A; 

void setup(){
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  
  Serial.begin(115200);
}

void loop(){
  if (Serial.available() > 2){

     int bytesRead = Serial.readBytesUntil(lineEnding, (char*)colors, 3);
  }  
  
 
  analogWrite(redPin, map(colors[0], 0, 255, 0, max_red));
  analogWrite(greenPin, map(colors[1], 0, 255, 0, max_green));
  analogWrite(bluePin, map(colors[2], 0, 255, 0, max_blue));
}

