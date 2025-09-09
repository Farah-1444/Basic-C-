#include<iostream>
using namespace std;
int main(){
    int sqr;
    int n;
    cout<<"n : ";
    cin>>n;
    if((n>=10) && (n<=100)){
        sqr=n*n;
        cout<<"Square of n is "<<sqr;
    }
    else{
        cout<<"ERROR";
    }
}