#include <iostream>
#include <vector>
using namespace std;

template <typename T>//Changeable datatype... Does not have to be T
bool foo(T x, T y){
    return x == y;
}

template <typename T>//Changeable datatype... Does not have to be T
void display(T x){
    cout << x << endl;
}

ostream &operator<<(ostream &output, vector<int> v){
    for (int i : v){
        output << i << ' ';
    }
    return output;
}

int main(){
    string a = "snow", b = "sun";
    cout << foo(a, b) << endl;
    display(a);
    display(b);
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << vec << endl;
}