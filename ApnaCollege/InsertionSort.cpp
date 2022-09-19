#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,65,24,77,43,23};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++)
    {
        int curent = arr[i];
        int j = i-1;
        while(arr[j]>curent&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curent;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}