#include<iostream>
#include<limits>
using namespace std;

int minJumps(int arr[],int n)
{
    int jumps[n];
    jumps[0]=0;
    for(int i=1;i<n;i++)
    {
        jumps[i]=INT_MAX;
        for(int j=0;j<i;j++)
        {
            if(arr[j]+j>=i && jumps[j]!=INT_MAX)
                jumps[i] = min(jumps[i],jumps[j]+1);
        }
    }
    return (jumps[n-1]!=INT_MAX)?jumps[n-1]:-1;
}
   
int main()
{
    int Arr[]={1,3,5,8,9,2,6,7,6,8,9};
    int N = sizeof(Arr)/sizeof(Arr[0]);
    cout<<minJumps(Arr,N);   
}