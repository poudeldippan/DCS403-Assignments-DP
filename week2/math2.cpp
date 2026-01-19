//c++ program to calculate the sine, cosine, and tangent of an angle in radians
#include <iostream>
#include <cmath>
using namespace std;    
int main() {
    double angle;
    cout << "Enter angle in radians: ";
    cin >> angle;

    double sineValue = sin(angle);
    double cosineValue = cos(angle);
    double tangentValue = tan(angle);

    cout << "Sine(" << angle << ") = " << sineValue << endl;
    cout << "Cosine(" << angle << ") = " << cosineValue << endl;
    cout << "Tangent(" << angle << ") = " << tangentValue << endl;

    return 0;
}   