#include <iostream>

using namespace std;

int main() {
    int numbers[6] = {1, 2, 3, 4, 5, 6};
    
    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}
