#include <iostream>
using namespace std;

//int foo(int m){
    //cout << "Address of m is: " << &m << '\n';
    //m=10;
    //return m;
//}

void bar(int data[5]){
    cout << "Address of data is: " << &data << '\n';
    data[0] = 97;
}

int main(){
    //int m = 9;
    //cout << "Address of m is: " << &m << '\n';
    //m = foo(m);
    //cout << "m is now: " << m << '\n';

    int data[5] = {2,3,5,7,11};
    cout << "Address of data is: " << &data << '\n';
    bar(data);
    for (int i = 0; i < 5; i++){
        cout << data[i] << ' ';
    }
    cout << '\n';
}