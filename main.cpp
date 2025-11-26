#include <iostream>
using namespace std;

int main() {
  double calcarea(double raggio) {
    double area;

    area = 3.14 * raggio * raggio;
    
    return area;
}

double calccirc(double raggio) {
    double circonferenza;

    circonferenza = 2 * 3.14 * raggio;
    
    return circonferenza;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
