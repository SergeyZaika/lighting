#from arduino lightning

#define GREEN_PIN 8
#define YELLOW_PIN 10
#define RED_PIN 12

int red_on = 12000;
int yellow_on = 3000;
int green_on = 12000;
int green_off = 1500;
int green_blink = 1500;

void setup() {
  pinMode(GREEN_PIN,OUTPUT); //green
  pinMode(YELLOW_PIN,OUTPUT);//yellow
  pinMode(RED_PIN,OUTPUT);//red
}

void loop() {
  digitalWrite(RED_PIN,HIGH);
  delay(red_on);//red 3s
  digitalWrite(YELLOW_PIN,HIGH);
  delay(yellow_on);//yellow 1s
  digitalWrite(RED_PIN,LOW);
  digitalWrite(YELLOW_PIN,LOW);
  digitalWrite(GREEN_PIN,HIGH);
  delay(green_on);//green 3s
  digitalWrite(GREEN_PIN,LOW);
  delay(green_off);//green off
 
  for (int i = 0; i <4; i = i+1){
    digitalWrite(GREEN_PIN,HIGH);
    delay(green_blink);//green 0.5s
    digitalWrite(GREEN_PIN,LOW);
    delay(green_off);//green 0.5s
  }
  
  digitalWrite(YELLOW_PIN,HIGH);
  delay(yellow_on);//yellow 1s
  digitalWrite(YELLOW_PIN,LOW);
    
  }
