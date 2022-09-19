#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b = temp;
}
void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void display(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ṇ";
    }
}
int main()
{
    int arr[]={33,45,23,86,32,84};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    display(arr,n);
}