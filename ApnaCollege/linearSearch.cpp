#include<iostream>
using namespace std;
int linearSearch(int arr[],int n, int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
            return i;
    }
    return -1;
}
int main()
{
    int arr[]={12,53,65,13,76,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k = 65;
    cout<<linearSearch(arr,n,k);
}