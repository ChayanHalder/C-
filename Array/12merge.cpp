#include<iostream>
#include<algorithm>
using namespace std;

void merge(int arr1[],int arr2[],int n, int m)
{
    int i=0;
    while(i<n){
        if(arr1[i]>arr2[0])
            swap(arr1[i],arr2[0]);
        i++;
        sort(arr2,arr2+m);
    }
}
void display(int arr1[],int arr2[],int n, int m)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int j=0;j<m;j++)
    {
        cout<<arr2[j]<<" ";
    }
}
int main()
{
    int N=3,M=2;
    int arr1[]={5,18,20};
    int arr2[]={10,12};
    merge(arr1,arr2,N,M);
    display(arr1,arr2,N,M);
}