int i;
int red=5;
int blue=6;
int green=9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
i=Serial.read();
if(i=='r'){
digitalWrite(red,HIGH);
digitalWrite(blue,LOW); 
digitalWrite(green,LOW);  
} 

if(i=='b'){
digitalWrite(blue,HIGH);  
digitalWrite(green,LOW); 
digitalWrite(red,LOW); 
}
if(i=='g'){
digitalWrite(green,HIGH); 
digitalWrite(red,LOW); 
digitalWrite(blue,LOW); 
}
}
