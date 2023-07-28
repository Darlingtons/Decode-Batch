#include<iostream>
using namespace std;
int main(){
    int r , pi=3.14 , a, p;
    cout<<"Enter the radius = ";
    cin>>r;
    a=pi*r*r;
    p=2*pi*r;
    if (a>p)
    {
        cout<<"Area is greater than the perimeter .";
    }
    else{
        cout<<"Perimeter  is greater than area .";
    }

    return 0;
}