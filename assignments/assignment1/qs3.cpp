#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter the year = ";
    cin>>y;
    if (y%400==0)
    {
        cout<<"The year is  leapyear .";
    }
    else if (y%100==0)
    {
        cout<<"The year is not a leapyear .";
    }
    else if (y%4==0)
    {
        cout<<"The year is a leap year .";
    }
    else{
        cout<<"The year is not a leap year .";
    }


    return 0;
}