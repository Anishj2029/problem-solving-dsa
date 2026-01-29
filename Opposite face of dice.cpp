#include<iostream>
using namespace std;

int getoppo(int n){
    
    if(n < 7){
        int oppo = 7 - n;
        cout<<oppo;
        return oppo;
    }else{
        cout<<"The value is greater than 7 !!!";
        return n;
    }
    
}


int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    getoppo(n);
    
    
}