#include<iostream>
using namespace std;

int compare(int arr1[],int arr2[],int n1, int n2)
{
    int count=n1+n2;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
                --count;
        }
    }
    return count;
}

int main()
{
    int arr1[]={85,25,1,32,54,6};
    int arr2[]={85,2};
    int n1=6,n2=2;
    cout<<compare(arr1,arr2,n1,n2);
}