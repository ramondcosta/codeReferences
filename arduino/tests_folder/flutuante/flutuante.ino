float x;
char buffer[20] ;
void setup(){
	Serial.begin(9600);
	x = 3223.145;
}

void loop(){
	dtostrf(x,2,2,buffer);
	Serial.println(buffer);
	delay(1000);
}
