#include <iostream>
using namespace std;

const int NUM_ENTRIES = 4;

void add_one_to_all_entries(int* p, int capacity){
    for(int i =0; i < capacity; i++){
        p[i]++;
    }
}

void print_array(int* p, int capacity){
    for(int i = 0; i < capacity; i++){
        cout << p[i] << ' ';
    }
}

int main(){
    // static array:
    int static_array[NUM_ENTRIES] = {1,2,3,4};
    //dynamic array:
    cout << "Enter the capacity of your dynamic array: ";
    int capacity;
    cin >> capacity;
    int* pointer_to_dynamic_array = new int[capacity]; 
    cout << "pointer_to_dynamic_array is: " << pointer_to_dynamic_array << "\n";
    // do stuff with this memory...
    for (int i = 0; i<capacity; i++){
        pointer_to_dynamic_array[i] = i +10;
    }
    print_array(pointer_to_dynamic_array,capacity);
    add_one_to_all_entries(pointer_to_dynamic_array,capacity);
    // free the memory: 
    delete[] pointer_to_dynamic_array;
}
