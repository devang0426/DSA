#include <iostream>
using namespace std;

class Node {

public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {


    Node* Head1 = new Node(10);
    Node* sec = new Node(2);
    Node* thd = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    Head1->next = sec;
    sec->next = thd;
    thd->next = fourth;
    fourth->next = fifth;


    Node* prev = NULL;
    Node* curr = Head1;
    Node* nextNode = NULL;

    while(curr != NULL) {

        nextNode = curr->next;   
        curr->next = prev;      
        prev = curr;
        curr = nextNode;         
    }

    Head1 = prev;

    Node* temp = Head1;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}