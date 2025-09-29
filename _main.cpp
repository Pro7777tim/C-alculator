#include <iostream>
#include <locale>
#include <limits>
#include <math.h>

using namespace std;

int calculator() {
    double num1, num2;
    char math;
    cout << "Enter a mathematical operation(+,-,*,/,^): \n";
    cin >> math;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (math == '+' || math == '-' || math == '/' || math == '*' || math == '^') {
        cout << "Enter the number 1: \n";
        cin >> num1;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (num1) {
            cout << "Enter the number 2: \n";
            cin >> num2;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } else {
        cout << "Mathematical operation error \n";
    }
    if (math && num1 && num2) {
        switch (math) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                cout << "Result: " << num1 / num2 << endl;
                break;
            case '^':
                cout << "Result: " << pow(num1, num2) << endl;
                break;
        }
    } else {
        cout << "Input error" << endl;
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    cout << "----------" << endl;
    while (true) {
        calculator();
        cout << "----------" << endl;
    }
    return 0;
}
