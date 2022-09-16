#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=2; i<=n; i++){  // if we multiply 2*n then we can find the sum of n element
        if(i%2==0){
        sum+=i;
        i=i+1;
        }
    }
    cout<<"value of sum is : "<< sum;

    return 0;
}