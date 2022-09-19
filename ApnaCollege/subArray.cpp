#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,5,4,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(int j=i;j<n;j++)
        {
            temp+=arr[j];
            cout<<temp<<endl;
        }
    }
}