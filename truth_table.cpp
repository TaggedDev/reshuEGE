#include <iostream>
#include <string>
#include <vector>
using namespace std;

void setZ(int i, bool& z) {
    if (i % 2 == 0) {
        z = true;
    }
    else {
        z = false;
    }
}

int main() {
    bool x, y, z;
    x = false;
    y = false;
    z = false;
    
    cout << "x " << "y " << "z" << endl;

    for (int i = 1; i < 5; i++)
    {
        x = false;
        if (i > 2) {
            y = true;
        }
        else {
            y = false;
        }
        setZ(i, z);
        cout << x << " " << y << " " << z << endl;
    }

    for (int i = 1; i < 5; i++)
    {
        x = true;
        if (i > 2) {
            y = true;
        }
        else {
            y = false;
        }
        setZ(i, z);
        cout << x << " " << y << " " << z << endl;
    }
    
    

    return 0;
}