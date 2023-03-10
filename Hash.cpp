#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <fstream>

using namespace std;

class HashTable {
private:
    HashTable() = delete;
public:
    HashTable(vector<string> words, int table_capacity);
    friend ostream& operator<<(ostream& os, HashTable &ht);
    vector<list<string>> get_table();
};

ostream &operator<<(ostream &output, list<string> &dll) {
    for (string s : dll) {
        output << s << ' ';
    }
    return output;
}

ostream &operator<<(ostream &output, HashTable &ht) {
    vector<list<string>> table = ht.get_table();
    int row_number = 0;
    for (vector<list<string>>::iterator it = table.begin(); it != table.end(); it++) {
        output << row_number << ' ';
        output << *it << endl;
        row_number++;
    }
    return output;
}

vector<list<string>> HashTable::get_table() {
    return table;
}

void grab_data(string file_name, vector<string> &words) {
    ifstream instream(file_name);
    string word;
    while(instream >> word)  {
        words.push_back(word);
    }
}

// ./filename words20.txt 10
// argv[1] = text file that contains strings
// argv[2] = initial capacity of hash table
int main(int argc, char **argv) {
    string file_name = argv[1];
    int table_capacity = stoi(argv[2]);
    vector<string> words;
    grab_data(file_name, words);
    HashTable ht(words, table_capacity);
    cout << ht << endl;
}