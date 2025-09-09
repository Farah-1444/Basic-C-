#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer ";
    cin>>n;
                                                    //eg n is 2
    cout<<"Pre increment of n is "<<++n<<endl;      //++n is
    cout<<"Post increment of n is "<<n++<<endl;
    cout<<"Pre decrement of n is "<<--n<<endl;
    cout<<"Post increment of n is "<<n--<<endl;
    cout<<n;
}