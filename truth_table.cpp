#include <iostream>
#include <string>
#include <vector>
using namespace std;

void setV(int i, bool& v) {
    if (i % 32 <= 16 && i % 32 != 0) {
        v = true;
    }
    else {
        v = false;
    }
}

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
    if (i % 4 == 0 || i % 4 == 1) {
        y = true;
    }
    else {
        y = false;
    }
}

void setZ(int i, bool& z) {
    if (i % 2 == 0) {
        z = true;
    }
    else {
        z = false;
    }
}

int main() {
    bool w, x, y, z, v;
    v = false;
    w = false;
    x = false;
    y = false;
    z = false;
    
    cout << "     v " << "w " << "x " << "y " << "z" << endl;

    for (int i = 1; i < 33; i++)
    {
        setV(i, v);
        setW(i, w);
        setX(i, x);
        setY(i, y);
        setZ(i, z);
        if (i < 10) {
            cout << i << ".   " << v << " " << w << " " << x << " " << y << " " << z << endl;
        }
        else {
            cout << i << ".  " << v << " " << w << " " << x << " " << y << " " << z << endl;
        }
       
    }

    return 0;
}