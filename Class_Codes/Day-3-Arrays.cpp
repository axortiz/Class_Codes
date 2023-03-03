#include <iostream>
#include <string>
using namespace std;

const int NUM_NAMES = 3;

// Returns the index of the first space that appears in the given string,
// and returns -1 is no space is found (we wrote this last time):
int get_index_of_space(string s) {  
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            return i;
        }
    }
    return -1;
}

 // get_surnames(string names[NUM_NAMES]){
}

int main() {
    string names[NUM_NAMES] = {"Giles Snyder", "Korva Coleman", "Lakshmi Singh"};
    // Let's grab all surnames from that array:
  get_surnames(names);
}