//ternary operator to find smaller of 2 numbers
#include <iostream> 

using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int smaller = (num1 < num2) ? num1 : num2;

    cout << "The smaller number is: " << smaller << endl;

    return 0;
}