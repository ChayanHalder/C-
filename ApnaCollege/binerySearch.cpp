#include<iostream>
using namespace std;
int binerySearch(int arr[],int n,int k)
{
    int l=0,h=n;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==k){
            return m;}
        else if(arr[m]>k)
        {    l=m-1;}
        else {
            h=m+1;}        
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    cout<<binerySearch(arr,n,k)<<endl;
}