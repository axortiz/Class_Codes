// data types

#include <iostream>
#include <iomanip>   // used for setprecision()
#include <bitset>    // used for converting to binary

using namespace std;

// I can't explain most of this function to you yet,
// but it prints the binary version of the given data
// straight from the data's memory location:
template<typename T>
void view_memory(T & data) {
    char* p = (char *) &data;
    for (int k = sizeof(data) - 1; k >= 0; k--) {
        cout << bitset<8>(p[k]) << " ";
    }
    cout << '\n';
}

int main() {
    cout << "Enter an integer: ";
    int m;
    cin >> m;
    cout << "Your integer    : " << m << '\n';
    cout << "Memory location : " << &m << '\n'; //stored in hexadecimal with base 16
    view_memory(m);

    cout << "Enter a float: ";
    float f;
    cin >> f;
    view_memory(f);
    
}