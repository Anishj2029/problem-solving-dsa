#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the triangle a, b, c :";
    cin>>a>>b>>c;
    
    if( a + b >= c && b + c >= a && a + c >= b){
        cout<<"A valide Triangle !!!!!";
    }
    else{
        cout<<"Not an valide Triangle !!!!";
    }
}