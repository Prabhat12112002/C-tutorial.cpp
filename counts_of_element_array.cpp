#include<iostream>
using namespace std;

int main(){
    float arr[]= {10,9,3,6,5,6,7,8,0};
    float sum=0, avg;
    int count = 0;

    for(int i=0; i<9; i++){
        sum += arr[i];
        count++;
    }
    avg = sum/count;
    count = avg;
    cout<<count;


    // cout<<sum;
    // int avg; 

    // avg = sum/count;

    // for(int a:arr){

    //    if(a == avg){
    //      count++;
    //    }
    // }

    // cout<<count;
        return 0;
    }
//     int arr[]= arr(10,9,3,6,5,6,7,8,0);
    
//     sum = array_sum(array);
    
//     $avg = $sum/count($array);
    
//     $count = 0;

// foreach ($array as $a){

// if($a == $avg){

// $count++;

// }

// }

// print_r($count);