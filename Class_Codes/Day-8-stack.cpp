#include <iostream>

using namespace std;

const int INITIAL_CAPACITY = 20;

class Stack {
private:
    int size;
    int capacity;
    int* data;
    void resize();
    void display();
public:
    Stack();
    Stack(int size, int capacity);
    int top();
    void push(int new_data);
    int pop();
    bool empty();
    int get_size();
};

void Stack::resize(){
    
}

Stack::Stack() {
    size = 0;
    capacity = INITIAL_CAPACITY;
    int* data = new int[capacity];
}

Stack::Stack(int initial_size, int initial_capacity) {
    size = initial_size;
    capacity = initial_capacity;
    int* data = new int[capacity];
}

int Stack::get_size() {
    return size;
}

void Stack::display() {
    if (empty()) {
        cout << "The stack is empty! \n";
        return; 
    }
    cout << "The stack is: ";
    for (int i = 0; i < size; i++) {
        data[i] << ' ';
    }
    cout << endl;
}

void Stack::push(int new_data) {
    if (size==capacity){
        resize();
    }
    data[size] = new_data;
    size++;
}

bool Stack::empty() {
    return size == 0;
}


int main() {
    Stack s(0, INITIAL_CAPACITY);
    s.get_size();
}