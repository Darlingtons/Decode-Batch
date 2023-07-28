#include<iostream>
using namespace std ;
int main(){
    int x , y;
    cout<<"Enter the x and y = \n";
    cin>>x>>y;
    if(x==0 && y==0)
    {
        cout<<"The point lies on the origin .";
    }
    else if (x==0)
    {
        cout<<"The points lies on the y axis .";
    }
    else if (y==0)
    {
        cout<<"The ponts lies on the x axis .";
    }
    
    else{
        cout<<"The points lies between x and y axis";
    }
    return 0;
}