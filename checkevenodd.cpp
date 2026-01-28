#include <iostream>
using namespace std;

bool checkeven(int n){
    if((n & 1)== 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    
    if(checkeven(n) == true){
        cout<<"The given number is even";
    }
    else{
        cout<<"The given number is odd";
    }
}