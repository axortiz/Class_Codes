#include <iostream>
#include <vector>
using namespace std;

/* Warmup: Explain why the size and capacity do not always match. */
template <typename T>
void display_info(vector<T> &vec) {
    cout << "vec.size(): " << vec.size() << ' ';
    cout << "vec.capacity(): " << vec.capacity() << endl;
}

ostream &operator<<(){
    
}

template <typename T>
void add_data(vector<T> &vec, T data_to_add) {
    cout << "pushing " << data_to_add << "  ->  ";
    vec.push_back(data_to_add);
    display_info(vec);
}

int main() {
    vector<int> vec;
    for (int i = 0; i < 9; i++) {
        add_data(vec, i + 10);
    }
}

/* After the warmup:
   - reserve and emplace_back
   - iterator invalidation 
*/

