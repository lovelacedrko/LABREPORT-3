#include"Led.h" 


Led Red (13);


void setup(){
Red.init();

}

void loop(){
 Red.on(); // put your main code here, to run repeatedly:
delay(1000);
Red.off();
delay(1000);
}
