#include<iostream>
#include<set>
using namespace std;

int longestConsecutive(int *arr,int n)
{
    set<int> _set;
    for(int i=0;i<n;i++)
        _set.insert(arr[i]);

    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(_set.find(arr[i]-1)== _set.end())
        {
            int j = arr[i] + 1;
            while(_set.find(j) != _set.end())
                j++;
            ans=max(ans,j-arr[i]);
        }
    }
    return ans;  
}

int main()
{
    int arr[]={1,9,3,10,4,20,2};
    int n=7;
    cout<<longestConsecutive(arr,n);
}