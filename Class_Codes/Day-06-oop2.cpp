#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int uniform_number;
    int number_fumbles;
public:
    // Prototyping the class: 
    Player();
    Player(string n, int uni, int fum);
    string get_name();
    int get_uniform_number();
    int get_number_fumbles();
    void add_fumbles(int num_fumbles); //  adds num_fumbles to number_fumbles

};

Player::Player() {  // this is the default constructor:
    cout << "running the default constructor.." << '\n';
    name = "X";
    uniform_number = -1;
    number_fumbles = 0;
}
Player::Player(string n, int uni, int fum) {  // this is the "normal" constructor:
    cout << "running the normal constructor.." << '\n';
    name = n;
    uniform_number = uni;
    number_fumbles = fum;
}
string Player::get_name() {
    return name;
}
int Player::get_uniform_number() {
    return uniform_number;
}
int Player::get_number_fumbles() {
    return number_fumbles;
}
void Player::add_fumbles(int num_new_fumbles) {
    number_fumbles += num_new_fumbles;
}

int main() {
    Player p("John Johnson", 25, 0);
    Player q("David Petz", 22, 0);
    cout << p.get_name() << ' ' << p.get_uniform_number() << '\n';
    cout << q.get_name() << ' ' << q.get_uniform_number() << '\n';
    q.add_fumbles(4);
    cout << q.get_name() << " has " << q.get_number_fumbles() << " fumbles!\n";
}