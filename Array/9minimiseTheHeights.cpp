#include<iostream>
using namespace std;

int minimise(int arr[],int k,int n)
{
    //sort(arr,arr+n);
    return (arr[n-1]-k)-(arr[0]+k);
}
int main()
{
    int Arr[]={1,5,8,10};
    int N=4,K=2;
    cout<<minimise(Arr,K,N);
}