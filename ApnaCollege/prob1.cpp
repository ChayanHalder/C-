#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,7,11,14,16,20,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k = 31,l=0,h=n;
    while(l<h)
    {
        if(arr[l]+arr[h]==k)
        {
            cout<<arr[l]<<" "<<arr[h];
            break;
        }else if(arr[l]+arr[h]>k)
        {
            h--;
        }else{
            l++;
        }
    }
}