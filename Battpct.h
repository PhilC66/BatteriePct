/*
	PhC 21/01/2019
	Fonction renvoie etat batterie en % à partir de sa tension

	Pour Batterie
	Plomb Ncell ou Lipo

*/

#include<Arduino.h>

int BattPBpct(int vbat, int Ncell);
int BattLipopct(int vbat);
