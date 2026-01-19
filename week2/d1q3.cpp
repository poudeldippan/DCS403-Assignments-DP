// code in c++ to assign grades based on marks 80-100 is A 60-79 is B 40-59 is C below 40 is F
#include <iostream>
using namespace std;       

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    
    if (marks >= 80 && marks <= 100) {
        cout << "Grade: A" << endl;
    } else if (marks >= 60 && marks < 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 40 && marks < 60) {
        cout << "Grade: C" << endl;
    } else if (marks < 40) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }
    
    return 0;
}