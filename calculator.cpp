//Charae a/L Eh Sin B031820094
//A simple C++ calculator to calculate two user's inputs.
#include <iostream>
using namespace std;

int askOperator(int op) {    
    cout << "Please choose the operation that you wish to perform" << endl;
    cout << "1. Addition" << endl << "2. Substraction" << endl << "3. Multiplication" << endl 
    << "4. Division" << endl << "5. Modulus" << endl;    
    cin >> op;
    return op;
}

int askNumber(int n) {
    cin >> n;
    return n;
}

void calculator(int op, int n1, int n2) {
    switch(op) {
        case 1:
            cout << "The result is " << n1 + n2;
            break;
        case 2:
            cout << "The result is " << n1 - n2;
            break;
        case 3:
            cout << "The result is " << n1 * n2;
            break;
        case 4: 
            cout << "The result is " << n1 / n2;
            break;
        case 5: 
            cout << "The result is " << n1 % n2;
            break;
        default: 
            cout << "Invalid operation!" << endl;
    }
}

int main() {
    int op, n1 = 0, n2 = 0;
    cout << "Welcome to a my C++ calculator app. by azzipskcin" << endl;
    op = askOperator(op);
    cout << "Enter the first value: ";
    n1 = askNumber(n1);
    cout << "Enter the second value: ";
    n2 = askNumber(n2);
    cout << endl;
    calculator(op, n1, n2);
    return 0;    
}
