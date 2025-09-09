#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of days in the month: ";
    cin >> n;
    int* temperatures = new int[n]; 
    cout << "Enter temperatures for each day: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(temperatures + i); 
    }
    int highest = *temperatures, lowest = *temperatures;
    double sum = 0;
for (int i = 0; i < n; i++) {
        if (*(temperatures + i) > highest) highest = *(temperatures + i);
        if (*(temperatures + i) < lowest) lowest = *(temperatures + i);
        sum += *(temperatures + i);
    }
    double average = sum / n;
    cout << "Lowest temperature: " << lowest << endl;
    cout << "Highest temperature: " << highest << endl;
    cout << "Average temperature: " << average << endl;
    delete[] temperatures; 
    return 0;
}






