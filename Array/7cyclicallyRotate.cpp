#include<iostream>
using namespace std;

void rotate(int arr[],int n)
{
    int val=arr[n-1];
    for(int i=n-1;i>=1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=val;
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    int N = 5;
    rotate(A,N);
    display(A,N);
}