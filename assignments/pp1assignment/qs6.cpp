#include<iostream>
using namespace std;
int main(){
    int n, m ;
    cout<<"Enter the row numebr = ";
    cin>>m;
    cout<<"Enter the coloumn number = ";
    cin>>n;
    for (int i = 1; i <=m; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            if (i==1 || i==m)
            {
                cout<<"*";
            }
            else if (j==1 || j==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
    }
