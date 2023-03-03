#include <iostream>

using namespace std;

int factorial(int number){
    if(number>50){
        return 1;
    }
    return number*factorial(number+1);
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;;
    return 0; 
}