#include<iostream>
using namespace std; 
int main(){
int arr[4][4]={{1,3,4,6},{2,4,5,7},{3,5,6,8},{4,6,7,9}};
int max = arr[0][0];
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (arr[i][j]>max)
            {
                max = arr[i][j];
            }   
        }   
    }
    cout<<max;
}