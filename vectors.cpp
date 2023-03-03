#include <iostream>
#include <vector>

using namespace std;

ostream &operator<<(ostream &output, vector<int> vector){
    for(int number : vector){
        output << number << ' ';
    }
    return output;
}


int main(){
    vector <int> numbers;
    numbers.push_back(13);
    numbers.push_back(7);
    numbers.push_back(11);
    cout << numbers << endl;
    vector<int>::iterator it = number.begin(); // THIS is an iterator 
    // vector<int>::iterator can be replaced by auto
    // auto it = number.begin();
    numbers.insert(it, 1, 88);
}