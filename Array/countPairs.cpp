#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int count(int arr[],int n,int k)
{
    int res=0;
    map<int,int> map;
    for(int i=0;i<n;i++)
        map[arr[i]]++;
    for(int i=0;i<n;i++)
    {
        if(2*arr[i]==k)
            res += max(map[arr[i]] - 1,0);
        else
            res+= map[k-arr[i]];
    }
    return res/2;
}
int main()
{
    int arr[]={1,5,7,1};
    cout<<count(arr,4,6);
}