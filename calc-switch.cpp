#include <iostream>
using namespace std;

int main()
{
    // print a welcome message to the user
    cout << "Welcome to the calculator program\n" << endl;
    // declare the variables
    double num1,num2;
    char op;
    // take the inputs from the user
    cout << endl << "enter your first number : ";
    cin >> num1;
    cout << endl << "choose the operator [+ , - , * , /] : ";
    cin >> op;
    cout << endl << "enter your second number : ";
    cin >> num2;
    // the code of the program
    switch(op)
    {
    case'+':
        cout << endl << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case'-':
        cout << endl << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case'*':
        cout << endl << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case'/':
        cout << endl << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    default:
        cout << endl << "wrong operation\nplease try again" << endl;
    }
    return 0;
}
