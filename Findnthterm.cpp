#include<iostream>
using namespace std;

int findnthterm(int a1, int a2, int n){
    
    int anth = a1 + (n - 1)*(a2 - a1);
    return anth;
}

int main(){
    int a1, a2, n;
    cout<<"Enter a1, a2 and nth term : ";
    cin>>a1>>a2>>n;
    
    cout<<findnthterm(a1, a2, n);
}