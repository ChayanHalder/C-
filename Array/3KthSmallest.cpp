#include<iostream>
using namespace std;

int main()
{
    int arr[]= {12,7,2,9,12,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int min = arr[0];

    for(int i=0; i<k;i++)
    {
        if(arr[i] < min)
            min=arr[i];
    }
    cout<<min;
}