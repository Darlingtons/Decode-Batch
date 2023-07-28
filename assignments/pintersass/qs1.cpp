#include<iostream>  
using namespace std;
void mult(int *p , int *q){
    cout<<((*p)*(*q));
}
int main(){
    int n , m;
    cout<<"Enter the first number = ";
    cin>>n;
    cout<<"Enter the second number = ";
    cin>>m;
    mult(&n,&m);
}