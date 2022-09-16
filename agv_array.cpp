#include<iostream>
using namespace std;

int main(){
    int n, count=0;
    double avg, sum=0.00;
    float arr[20];

    cout<<"Enter the number of element : " ;
    cin>>count;

    cout << "Enter " << count << " elements\n";

    for(int i=0; i<count ; i++){
        cin>>arr[i];
    }

    for(int i=0; i<count ; i++){
        sum+=arr[i];
    }
     avg = sum/count;
     cout<<"Average is :"<<avg;
    return 0;
}