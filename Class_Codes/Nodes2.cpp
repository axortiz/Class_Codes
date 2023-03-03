#include <iostream>
using namespace std;

class Node {
private:
public:
    int key;
    Node* next;
    Node();
    Node(int new_key);
    void display();
};

Node::Node() {
    key = 0;
    next = nullptr;
}

Node::Node(int new_key) {
    key = new_key;
    next = nullptr;
}

void Node::display() {
    cout << "\nI am a Node!" << endl
         << "My key is " << key << " and my key lives at " << &key
         << endl
         << "and my next points at " << next << " and lives at " << &next
         << endl << endl;
}

class Stack {
private:
    Node* head;
public:
    Stack();
    void push(int new_key);
    void display();
};

Stack::Stack() {
    head = nullptr;
}

void Stack::push(int new_key) {
    head = new Node(new_key);
    display();
}

void Stack::display() {
    cout << "The stack is: ";
    cout << head->key << endl;
    cout << head->next << endl;
}

int main() {
    Stack s;
    s.push(101);
    s.push(102);
}