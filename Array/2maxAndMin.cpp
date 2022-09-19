#include<iostream>
using namespace std;

struct Pair{
    int max;
    int min;
};

Pair getMinMax(int arr[],int n)
{
    struct Pair minmax;

    if(n==1)
    {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }
    if(arr[0]>arr[1])
    {
        minmax.max=arr[0];
        minmax.min=arr[1];
    }else{
        minmax.max=arr[1];
        minmax.min=arr[0];
    }

    for(int i=2;i<n;i++)
    {
        if(arr[i]>minmax.max)
        {
            minmax.max=arr[i];
        }else if(arr[i]<minmax.min)
        {
            minmax.min=arr[i];
        }
    }
    return minmax;
}
int main()
{
    int arr[]={122,60,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    struct Pair minmax = getMinMax(arr,n);
    cout<<"max ="<<minmax.max;
    cout<<endl;
    cout<<"min ="<<minmax.min;
    return 0;
}