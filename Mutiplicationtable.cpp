#include <iostream>
using namespace std;

void printtable(int n, int i=1){
    
    if(i == 11){
        return;
    }
    
    cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    i++;
    printtable(n,i);
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    
    printtable(n);
}