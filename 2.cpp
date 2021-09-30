#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void setW(int i, bool& w) {
	if (i % 16 <= 8 && i % 16 != 0) {
		w = true;
	}
	else {
		w = false;
	}
}

void setX(int i, bool& x) {
	if (i % 8 <= 4 && i % 8 != 0) {
		x = true;
	}
	else {
		x = false;
	}
}

void setY(int i, bool& y) {
	if (i % 4 <= 2 && i % 4 != 0) {
		y = true;
	}
	else {
		y = false;
	}
}

void setZ(int i, bool& z) {
	if (i % 2 != 0) {
		z = true;
	}
	else {
		z = false;
	}
}

// -> !a || b
bool function(bool w, bool x, bool y, bool z) {
	return ( (!z) && x );
	// (!(x && y) || (!z || w)) && ((w || x) || !y) 
	// x && !y && (!z || w)
}

void t2() {
	bool w = false, x = false, y = false, z = false;
	for (int i = 0; i < 8; i++)
	{
		setW(i, w);
		setX(i, x);
		setY(i, y);
		setZ(i, z);
		/*if (function(w, x, y, z))*/
			cout << " x:" << x << " y:" << y << " z:" << z << " f:" << (function(w, x, y, z)) << endl;
	}
	return;
}