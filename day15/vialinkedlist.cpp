#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};


class Stack {
private:
    Node* top;  
    
public:

    Stack() {
        top = NULL;
    }
    

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << val << " pushed onto stack" << endl;
    }
    

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop." << endl;
            return -1;
        }
        
        Node* temp = top;
        int val = temp->data;
        top = top->next;
        delete temp;
        cout << val << " popped from stack" << endl;
        return val;
    }
    

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }
    

    bool isEmpty() {
        return top == NULL;
    }
    

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        
        cout << "Stack elements (top to bottom): ";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    

};

int main() {
    Stack stack;
    
    cout << "--- Stack Implementation using Linked List ---" << endl << endl;
    

    cout << "Pushing elements: 10, 20, 30, 40, 50" << endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    cout << endl;
    

    stack.display();
    cout << endl;
    

    cout << "Peek (top element): " << stack.peek() << endl << endl;
    

    cout << "Popping elements:" << endl;
    stack.pop();
    stack.pop();
    cout << endl;
    

    stack.display();
    cout << endl;
    

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl << endl;
    

    cout << "Popping all remaining elements:" << endl;
    while (!stack.isEmpty()) {
        stack.pop();
    }
    cout << endl;
    

    cout << "Trying to pop from empty stack:" << endl;
    stack.pop();
    cout << endl;
    
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}
