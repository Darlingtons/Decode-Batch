#include<iostream>
using namespace std;
void no(int n){
    int k = 0;
    while (n>0)
    {   
        n = n/10;
        k++;
    }
    cout<<k<<endl;
}
void square(int n){
    cout<<n*n;
}
int main(){
    int n ; 
    cout<<"Enter the number = ";
    cin>>n;
    no(n);
    square(n);
}