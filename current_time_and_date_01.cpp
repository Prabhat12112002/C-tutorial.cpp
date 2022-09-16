#include<bits/stdc++.h>
using namespace std;

int main(){
    time_t t = time(NULL);
    tm* tptr = localtime(&t);
    cout<<"Display the currrent time and date\n";
    cout<<"-------------------------------------\n";
    cout<<"Seconds = "<<(tptr->tm_sec)<<endl;
    cout<<"Minutes = "<<(tptr->tm_min)<<endl;
    cout<<"Hours = "<<(tptr->tm_hour)<<endl;
    cout<<"day of month = "<<(tptr->tm_mday)<<endl;
    cout<<"month of Year = "<<(tptr->tm_mon)+1<<endl;
    cout<<"Year = "<<(tptr->tm_year)+1900<<endl;
    cout<<"weekday = "<<(tptr->tm_wday)<<endl;
    cout<<"Day of year = "<<(tptr->tm_yday)<<endl;
    cout<<"daylight savings  = "<<(tptr->tm_isdst)<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"Current date : \n"<<(tptr ->tm_mday)<<"/"<<(tptr ->tm_mon)+1<<"/"<<(tptr ->tm_year)+1900 << endl;
    cout << "Current Time : \n" << (tptr->tm_hour)<<":"<< (tptr->tm_min)<<":"<< (tptr->tm_sec) << endl; 
           cout << endl;





    return 0;
}