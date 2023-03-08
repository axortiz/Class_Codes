#include <iostream>
#include <string>
#include <list>

using namespace std;

ostream &operator<<(ostream &output, list<string> words) {
    for (string s : words) {
        output << s << ' ';
    }
    return output;
}

int main() {
    list<string> words;
    words.push_back("happy");
    words.push_back("birthday");
    cout << words << endl;
    list<string>::iterator it = words.begin();
    it++;
    words.insert(it, "dang");
    cout << words << endl;
}