#include <string>
#include <iostream>

using namespace std;

const int NUM_WORDS = 4;

void foo(string words[NUM_WORDS], int liv[NUM_WORDS]){
    // liv = {0,0,0,0}
    for (int i = 0; i < NUM_WORDS; i++){
        int c = 0;
        for (int j = 0; j < words[i].length(); j++){
            if (words[i][j] != 'e' && words[i][j] != 'a') { // && means "and"
            c++;
            }
        }
        liv[i] = c; // liv = {6,9,8,7}
    }
}

int main(){
    string words[NUM_WORDS] = {"sanguine", "phlegmatic", "melancholic", "choleric"};
    int liv[NUM_WORDS];
    foo(words, liv);
    for (int i = 0; i < NUM_WORDS; i++){
        cout << liv[i] << " ";
    }
    cout << '\n';
}