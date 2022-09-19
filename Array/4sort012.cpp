#include<iostream>
using namespace std;

void swap(int arr[],int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sort012(int arr[], int n)
{
    int l=0,m=0,h=n-1;
    while(m<h)
    {
        if(arr[m]==0)
        {
            swap(arr,l,m);
            m++;
            l++;
        }else if(arr[m]==2)
        {
            swap(arr,m,h);
            h--;
        }else{
            m++;
        }
    }
}
int main()
{
    int arr[]={1,0,1,2,1};
    int n = 5;

    sort012(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}