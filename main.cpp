//Switch simple code to understand break, continue, and switch
#include <iostream>
using namespace std;
int result;
char op_char;
int number;
int main() {
    int result = 10;// initialize result to smth to work with
    while (true) {
        cout << "Enter operator and number";
        cin >> op_char >> number;

        if ((op_char == 'q') || (op_char == 'Q'))
            break;// break terminates
        switch (op_char) {
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                result /= number;
                break;
            default:
                cout << "Unknown operator" << op_char << '\n';
                continue;// continue goes to the beginning of the switch
        }
        cout << "Result: " << result << '\n';
    }
    return 0;
}