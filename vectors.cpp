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
}