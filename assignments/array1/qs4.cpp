#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of elements in the array = ";
    cin>>n;
    int  arr[n];
    for (int  i = 0; i <=n-1; i++)
    {
        cin>>arr[i];
    }
    int k= 0;
    bool flag= false;
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = i+1; j<= n-1; j++)
        {
            if (arr[i]==arr[j])
            {
                flag=true;
                k=arr[i];
                break;
            }
    
        }
        
    }
    if (flag==false)
    {
        cout<<"no duplicate";
    }
    else cout<<"Duplicate"<<endl;
    cout<<k;
}