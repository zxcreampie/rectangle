#pragma once
#include "main.h"
class rectangle {
private:
	int a;
	int b;

public:
	rectangle() {
		a = 1;
		b = 1;
	}
	rectangle(int a1, int b1) {
		a = a1;
		b = b1;
	}

	int get_a();
	void set_a(int a1);
	int get_b();
	void set_b(int b1);

	int P();
	int square();
	double diagonal();

	string g();

};