#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=(n+3); j++)
        { if ((i+j)>=5 && (i+j)<=8)
        {
              cout<<"*";
        }
        else cout<<" ";
          
        }
        cout<<endl;
    }
    return 0;
}