#include "rectangle.h"

int rectangle::get_a() {
	return a;
}
void rectangle:: set_a(int a1){
	if (a1 > 0) {
		a = a1;
      }
}

int rectangle::get_b(){
	return b;
}
void rectangle:: set_b(int b1){
	if (b1 > 0) {
		b = b1;
     }
}
int rectangle:: P(){
	return (a + b) * 2;
}
int rectangle::square() {
	return a * b;
}

double rectangle::diagonal() {
	return sqrt(a * a + b * b);
}

string rectangle::g(){
	return "rectangle: a=" + to_string(a) + " b=" + to_string(b);
}



int get_a();
void set_a(int a1);
int get_b();
void set_b(int b1);

int P();
int square();
double diagonal();

string g();






