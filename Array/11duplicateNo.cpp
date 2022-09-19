#include<algorithm>
#include<iostream>
using namespace std;

int duplicate(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,3,4,2,2};
    int n=5;
    cout<<duplicate(arr,n);
}