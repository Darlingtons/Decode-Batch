#include<iostream>
using namespace std ;
void square(int n){
    for (int i = 1; i <=n; i++)
    {
        int k= i*i;
        cout<<i<<"="<<k<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the n number = ";
    cin>>n;
    square(n);
}