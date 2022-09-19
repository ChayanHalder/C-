#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={4,5,1,2};
    int n=4;
    display(arr,n);

    int l=0,h=n-1;
    while(l<h)
    {
        swap(&arr[l],&arr[h]);
        l++;
        h--;
    }
    display(arr,n);
    return 0;
}