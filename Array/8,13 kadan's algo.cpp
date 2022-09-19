#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int sum = arr[0],tempsum = arr[0];
    for(int i=1;i<n;i++)
    {
        if(tempsum>=0)
        {
            tempsum+=arr[i];
        }
        if(tempsum<0)
        {
            tempsum=arr[i];
        }
        if(tempsum>sum)
        {
            sum=tempsum;
        }
    }
    return sum;
}

int main()
{
    int Arr[]={-1,-2,-3,-4};
    int N = 4;
    cout<<sum(Arr,N);   
}