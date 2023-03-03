#include <iostream>
#include <string>

int get_index_of_space(std::string name){
    for (int i = 0; i < name.length(); i++){
        if (name[i] == ' '){
            return i;
        }
    }
    return -1;
}

//std::string get_surname(string name){


int main(){
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "You typed " << name << "\n";

  std::cout << name << '\n';
  //get_surname(name)
  get_index_of_space(name);
}