#include<iostream>
using namespace std;

int maxProduct(int arr[],int n)
{
    int res,_min,_max;
    res=_min=_max=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            _max*=arr[i];
            _min= min(1,_min*arr[i]);
        }else if(arr[i]==0)
        {
            _min=_max=1;
        }else{
            swap(_min,_max);
            _min*=arr[i];
            _max=max(1,_max*arr[i]);
        }
        res = max(_max,res);
    }
    return res;
}

int main()
{
    int arr[]={6,-3,-10,0,2};
    int n=5;
    cout<<maxProduct(arr,n);
}