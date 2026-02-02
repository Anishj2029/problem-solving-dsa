#include<iostream>
using namespace std;

int findSUM(int n){
    
    int sum = 0;
    
    while(n != 0){
    int nt = n % 10;
    sum = sum + nt;
    
    n = n / 10;
    }
    return sum;
    
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    
    cout<<findSUM(n);
}