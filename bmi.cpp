#include <string>
#include "bmi.h"
using namespace std;

bmi::bmi(){
	mass=0;
	height=160;
}
bmi::bmi(int h,int m){
	mass=m;
	height=h;
}
void bmi::set(int h,int m){
	if(m<=0) mass=0;
	else mass=m;
	if(h<=0) height=160;
	else height=h;
}
double bmi::get(){
	b=(double)mass/((height/100.0)*(height/100.0));
	return b;
}
string bmi::category(){
	string c;
	if(b<15.0){
		c="Very severely underweight";
		return c;
	}else if(b<16.0){
		c="Severely underweight";
		return c;
	}else if(b<18.5){
		c="Underweight";
		return c;
	}else if(b<25.0){
		c="Normal";
		return c;
	}else if(b<30.0){
		c="Overweight";
		return c;
	}else if(b<35.0){
		c="Obese Class I (Moderately obese)";
		return c;
	}
	else if(b<40.0){
		c="bese Class II (Severely obese)";
		return c;
	}else{
		c="Obese Class III (Very severely obese)";
		return c;
	}
}
