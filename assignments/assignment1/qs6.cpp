#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"Enter the marks of the students = \n";
    cin>>a>>b>>c;
    if (a<b && a<c)
    {
        cout<<a<<" is the least .";
    }
    else if (b<a && b<c)
    {
        cout<<b<<" is the least.";
    }
    else{
        cout<<c<<" is the least .";
    }


    return 0;
}