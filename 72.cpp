#include <iostream>
using namespace std;
int main() {
    double Radius[10], Area[10];
    double* rPtr = Radius; 
    double* aPtr = Area;  
    cout << "Enter 10 radius values: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> *(rPtr + i);  }
    for (int i = 0; i < 10; i++) {
        *(aPtr + i) = 3.14 * (*(rPtr + i) * *(rPtr + i));   }
    cout << "Calculated area of 10 circles: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(aPtr + i) << " ";   }
    return 0;
}


