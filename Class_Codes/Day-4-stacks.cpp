#include <iostream>

using namespace std;

const int INITIAL_CAPACITY = 2;

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
    // int top();
    void push(int new_data);
    // int pop();
    bool empty();
    int get_size();
};

void Stack::resize() {
    int double_capacity = 2 * capacity;
    cout << "=== Resizing from " << capacity << " to " << double_capacity << " ===" << endl;
    int* double_stack = new int[double_capacity];
    for(int i = 0; i < capacity; i++){
        double_stack[i] = data[i];
    }
    capacity = double_capacity;
    delete[] data;
    data = double_stack;
}

void Stack::display() {
    if (empty()) {
        cout << ">>> The stack is empty! \n";
        return; 
    }
    cout << ">>> The stack is: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << ' ';
    }
    cout << endl;
}

Stack::Stack() {
    size = 0;
    capacity = INITIAL_CAPACITY;
    data = new int[capacity];
}

Stack::Stack(int initial_size, int initial_capacity) {
    size = initial_size;
    capacity = initial_capacity;
    data = new int[capacity];
}

void Stack::push(int new_data) {
    if (size == capacity) {
        resize();
    }
    cout << "Pushed: " << new_data << endl;
    data[size] = new_data;
    size++;
    display();
}

bool Stack::empty() {
    return size == 0;
}

int Stack::get_size() {
    return size;
}

int main() {
    Stack s(0, INITIAL_CAPACITY);
    for (int i = 0; i<100;i++){
        s.push(i);
    }
}