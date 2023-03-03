#include <iostream>
using namespace std;

class Node {
private:
    Node() = delete; // this prohibits the use of a default Node constructor
public:
    int key;
    Node* next;
    Node(int new_key);
    void display();
};

Node::Node(int new_key) {
    key = new_key;
    next = nullptr;
}

class Stack {
private:
    Node* head;
public:
    Stack();
    // ~Stack();
    bool empty();
    void push(int new_key);
    int pop();
    void display();
    void recursive_display(Node* current);
    // void recursive_display(Node* current);
};

Stack::Stack() {
    head = nullptr;
}

bool Stack::empty() {
    return head == nullptr;
}

void Stack::push(int new_key) {
    cout << "Pushing: " << new_key << endl;
    Node* new_node = new Node(new_key);
    new_node->next = head;
    head = new_node;
    display();
}

int Stack::pop() {
    if (empty()) {
        return 0;
    }
    int top_key = head->key;
    Node* top_next = head->next;
    delete head; // freeing the memory head was pointing to
    head = top_next;
    cout << "Popping: " << top_key << endl;
    display();
    return top_key;
}

void Stack::display() {
    cout << "=== The stack is: [ ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->key << ' ';
        current = current->next;
    }
    cout << "]" << endl;
    cout << "=== The stack is: [ ";
    recursive_display(head);
    cout << "]" << endl;
}

void Stack::recursive_display(Node* current){
    if(current == nullptr){
        return;
}
    cout << current->key << ' ';
    recursive_display(current->next);
}

int main() {
    Stack s;
    s.push(101);
    s.pop();
    s.push(102);
    s.push(103);
    s.push(104);
    s.pop();
}