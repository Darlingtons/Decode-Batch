#include<iostream>
using namespace std;
void area(int n){
    cout<<"The area is = "<<(3.14*n*n);
}
int main(){
    int n ; 
    cout<<"Enter the radius = ";
    cin>>n;
    area(n);
}