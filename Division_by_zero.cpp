#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout<<"enter number1: ";
    cin >> n1;
    cout<<"enter number2: ";
    cin >> n2;

    try {
        if (n2 == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        cout << "Result: " << n1 / n2 << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

/*OUTPUT
enter number1: 12
enter number2: 0
Error: Division by zero is not allowed.
*/
