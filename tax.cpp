#include<iostream>
using namespace std;
int main(){
    int salary;
    int tax;
    cout<<"Enter your Salary ";
    cin>>salary;

    if(salary>50000){
        cout<<"Your income tax is "<<salary*0.05;
    }
    if((salary>=30000) && (salary<=50000)){
        cout<<"Your income tax is "<<salary*0.03;
    }
    if(salary<30000){
        cout<<"Your income tax is "<<salary*0.02;
    }
}