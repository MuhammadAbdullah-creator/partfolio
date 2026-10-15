#include <iostream>
using namespace std;

int main() {
    int stack[5];
    int top = -1;
    int n, value;

    cout << "How many values to push? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (top == 4) {
            cout << "Stack is full! Cannot push more.\n";
            break;
        }

        cout << "Enter value: ";
        cin >> value;

        top++;
        stack[top] = value;
    }

    cout << "Stack: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }

    return 0;
}
