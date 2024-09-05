#include <iostream>
using namespace std;

int main()0
{
    char op;
    float num1, num2;

    cout << "Enter operation ( + ; - ; * ; / ):";
    cin >> op;
    cout << "Enter two operands:";
    cin >> num1 >> num2;  

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;

    default:
        // If the operator is other than +, -, * or /, an error message is shown
        cout << "Error! Operator is not correct";
        break;
    }
    return 0;
}
