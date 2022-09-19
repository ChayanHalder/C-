#include<iostream>
using namespace std;
int count(int arr[],int n)
{
    int count=0,temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {    temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int arr[]={2,4,1,3,5};
    int N=5;
    cout<<count(arr,N);
}