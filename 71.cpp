#include <iostream>
using namespace std;
int main() {
    int values[10]; 
    int* ptr = values; 
   cout << "Enter 10 integer values: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> *(ptr + i); 
    }
    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) % 2 != 0) { 
            if (*(ptr + i) > 0)
                *(ptr + i) += 1; 
            else
                *(ptr + i) -= 1; 
        }
    }
    cout << "Updated array: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(ptr + i) << " "; 
    }
    return 0;
}






