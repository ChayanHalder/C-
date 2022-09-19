#include<iostream>
using namespace std;

int calculate(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(k==(arr[i]+arr[j]))
                count++;
        }
    }
    return count;
}

int main()
{
    int n=4,k=2,arr[]={1,1,1,1};
    cout<<calculate(arr,n,k);
}