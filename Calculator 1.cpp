
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char op;

    cout << "Simple Calculator" << endl;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> n2;

    switch(op)
    {
        case '+':
            cout << "Result = " << n1 + n2;
            break;

        case '-':
            cout << "Result = " << n1 - n2;
            break;

        case '*':
            cout << "Result = " << n1 * n2;
            break;

        case '/':
            if(n2 != 0)
                cout << "Result = " << n1 / n2;
            else
                cout << "Cannot divide by zero";
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}
