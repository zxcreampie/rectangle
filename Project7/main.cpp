#include "rectangle.h"

int main() {
	rectangle rec1;
	rectangle rec2(3,4);

	cout << rec1.g()<< endl;
	cout << "perimetr: " << rec1.P() << endl;
	cout << "square: " << rec1.square() << endl;
	cout << "diagonal: " << rec1.diagonal() << endl;

	cout << "-----------------------------------" << endl;

	cout << rec2.g() << endl;
	cout << "perimetr: " << rec2.P() << endl;
	cout << "square: " << rec2.square() << endl;
	cout << "diagonal: " << rec2.diagonal() << endl;


	return 0;
}

