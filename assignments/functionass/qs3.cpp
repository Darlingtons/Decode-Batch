#include<iostream>
using namespace std;
void odd(int n , int m){
    for (int i = min(n,m); i <= max(n,m); i++)
    {
        if (i%2!=0)
        {
            cout<<i<<endl;
        }
        
    }
    
}
int main(){
    int n ; 
    cout<<"Enter the first no = ";
    cin>>n;
    int m ; 
    cout<<"Enter the second no = ";
    cin>>m;
    odd(n,m);
}