/*
	PhC 21/01/2019
	
	utilisation de la librairie Batteriepct
	
	Batterie Plomb
	vbat tension batterie 1215 = 12.15V 
	retourn etat batterie en %
	
	Batterie Lipo
	tension batterie 4150 = 4.150V 
	retourn etat batterie en %

*/

#include "Arduino.h"
#include <Battpct.h>

void setup(){
	Serial.begin(9600);
	Serial.flush();
		
	for(int V = 1050;V < 1300; V += 25){
	Serial.print(F("Batterie Pb:")),Serial.print(V/100.0, 2),Serial.print("V, "),Serial.print(BattPBpct(V,6)),Serial.println("%");
	}
	
	for(int V = 3200;V < 4225; V += 25){
	Serial.print(F("Batterie Lipo:")),Serial.print(V/1000.0, 2),Serial.print("V, "),Serial.print(BattLipopct(V)),Serial.println("%");
	}
}
void loop(){}