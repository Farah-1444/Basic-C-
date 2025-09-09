#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    if(n==0){
        cout<<"n is Zero.";
    }
    else if(n>=0){
        cout<<"n is Positive.";
    }
    else{
        cout<<"n is Negative.";
    }
}