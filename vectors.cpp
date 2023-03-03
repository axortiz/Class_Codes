#include <iostream>
using namespace std;

template <typename T>
class Node {
private:
    Node() = delete;  // the default constructor may never be used
public:
    T key;
    Node* next;
    Node* prev;
    Node(T new_key);
};

template <typename T>
Node<T>::Node(T new_key) {
    key = new_key;
}

template <typename T> //Changeable datatype... Does not have to be T
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
public:
    DoublyLinkedList();
    bool empty();
    void append(T new_key);
    void display();
    void append_at_front(T new_key);
    Node<T>* get_head_pointer();
};

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = nullptr;
    tail = nullptr;
}

template <typename T>
bool DoublyLinkedList<T>::empty() {
    return tail == nullptr;
}

template <typename T>
void DoublyLinkedList<T>::append(T new_key) {
    Node<T>* address_of_new_node = new Node<T>(new_key);
    if (empty()) {
        head = address_of_new_node;
        tail = address_of_new_node;
        // display();
        return;
    }
    tail->next = address_of_new_node;
    address_of_new_node->prev = tail;
    tail = address_of_new_node;
    // display();
}

template <typename T>
void DoublyLinkedList<T>::display() {
    cout << "The SLL is: ";
    Node<T>* current = head;
    while (current != nullptr) {
        cout << current->key << ' ';
        current = current->next;
    }
    cout << endl;
}

template <typename T>
void DoublyLinkedList<T>::append_at_front(T new_key) {
    if (empty()) {
        append(new_key);
        // display();
        return;
    }
    Node<T>* address_of_new_node = new Node<T>(new_key);
    address_of_new_node->next = head;
    head = address_of_new_node;
    address_of_new_node->next->prev = address_of_new_node;
    // display();
}

template <typename T>
Node<T>* DoublyLinkedList<T>::get_head_pointer() {
    return head;
}

template <typename T>
ostream &operator<<(ostream &output, DoublyLinkedList<T> dll) {
    output << "The DLL is: ";
    Node<T>* current = dll.get_head_pointer();
    while (current != nullptr) {
        output << current->key << ' ';
        current = current->next;
    }
    output << endl;
    return output;
}
// ... (14 lines left)