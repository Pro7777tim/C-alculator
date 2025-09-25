#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    cout << "----------" << endl;
    float num1, num2;
    char math;
    cout << "Enter the number 1: \n";
    cin >> num1;
    if (num1) {
        cout << "Enter a mathematical operation(+,-,*,/): \n";
        cin >> math;
        if (math == '+' || math == '-' || math == '/' || math == '*') {
            cout << "Enter the number 2: \n";
            cin >> num2;
        } else {
            cout << "Mathematical operation error \n";
        }
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
        }
    } else {
        cout << "Input error" << endl;
    }
    cout << "----------" << endl;
    return 0;
}
