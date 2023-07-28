#include<iostream>
using namespace std;
int main (){
    int x , y , z;
    cout<<"Enter the sides of the triangle = \n";
    cin>>x>>y>>z;
    if (x==y && y==z)
    {
        cout<<"This are a equilateral tringle .";
    }
    else if (x==y || y==z || x==z)
    {
        cout<<"This are the isoscelene triangle .";
    }
    else{
        cout<<"This are the scalene triangle .";
    }

    return 0;
}