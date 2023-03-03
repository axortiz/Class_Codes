#include <iostream>

using namespace std;

class Node{
private:
    Node() = delete;// the default constructor may never be used
public:
    int key;
    Node* next;
    Node* prev;
    Node(int new_key);
};

Node::Node(int new_key){
    key = new_key;
}

class Doublylinkedlist {
private:
    Node* head;
    Node* tail;
public:
    Doublylinkedlist();
    void append(int new_key);
    void display();
    bool empty();
};

Doublylinkedlist::Doublylinkedlist(){//head and tail pointing at nothing
    head = nullptr;
    tail = nullptr;
}

bool Doublylinkedlist::empty(){
    return tail == nullptr;
}

void Doublylinkedlist::append(int new_key){
    Node* address_new_node = new Node(new_key);
    if(empty()){//if tail == nullptr
        head = address_new_node;
        tail = address_new_node;
        display();
        return;
        }
    tail->next = address_new_node->next;
    address_new_node->prev = tail;
    tail = address_new_node;
    display();
}

void Doublylinkedlist::display(){
    Node* current = head;
    while(current!=nullptr){
        cout << current->key << '+';
        current=current->next;
    }
    cout << endl;
}

int main(){
    Doublylinkedlist d;
    d.append(12);
    d.append(13);
    d.append(14);
}