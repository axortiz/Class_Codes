#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int uniform_number;
public:
    Player(){
        name = "X";
        uniform_number = -1;
    }
    string get_name(){
        return name;
    }
};

int main(){
    Player p;
    cout << p.get_name() << '\n';
}