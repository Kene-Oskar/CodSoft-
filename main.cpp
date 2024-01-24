// OKAFOR KENECHUKWU
// C++ Programming
// CodSoft Task 2


#include <iostream>

using namespace std;

int main()
{

    double num1;
    double num2;
    double result;

    char operation;


       cout << " ***** Welcome! Here is a basic calculator for you. ***** " <<endl <<endl;

       cout << "Enter first number: " <<endl <<endl;
       cin >> num1;

       cout << "Choose an operation (+, -, *, /): " <<endl;
       cin >> operation;

       cout << "Enter second number: " <<endl;
       cin >> num2;


    if (operation == '+') {
        result = num1 + num2;
    }

    else if (operation == '-') {
        result = num1 - num2;
    }

    else if (operation == '*') {
        result = num1 * num2;
    }

    else if (operation == '/') {
        if (num2 != 0) {
        result = num1 / num2;
    }

    else {
       cout << "Error: Can't divide by zero." <<endl <<endl;
        return 1;
    }

    } else {
       cout << "Error: Invalid operation." <<endl <<endl;
        return 1;
    }


       cout << "Result: " << result << "." <<endl <<endl <<endl;

       cout << "**********" <<endl;

    return 0;
}
