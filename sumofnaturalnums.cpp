#include <iostream>
using namespace std;

// void addnatural(int n, int i=1, int sum=0){
    
//     if(i == n+1){
//         cout<<sum;
//         return;
//     }
   
//     sum = sum + i;
//     i++;
//     addnatural(n,i,sum);
    
// }
int addnatural(int n){
    
    return n * (n + 1)/2;
    
}


int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    
    cout<<addnatural(n);
}
// The space and time complexity is O(n) so find more optimal we find out there is formula to find sum for natural number (positive)

