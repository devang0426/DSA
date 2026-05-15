#include <iostream>
using namespace std;
// using arrayto implement stack
class Stack {

public:
    int arr[100];
    int top = -1;


    void push(int x) {

        top++;
        arr[top] = x;
    }


    void pop() {

        if(top == -1) {
            cout << "Stack Empty\n";
            return;
        }

        cout << arr[top] << " popped\n";

        top--;
    }


    void peek() {

        if(top == -1) {
            cout << "Stack Empty\n";
            return;
        }

        cout << "Top element: " << arr[top] << endl;
    }

    
    int size() {
        return top + 1;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();

    s.peek();

    cout << "Size: " << s.size() << endl;

    return 0;
}