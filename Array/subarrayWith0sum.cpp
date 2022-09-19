#include<iostream>
#include<map>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    map<int,bool> mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+= arr[i];
        if(sum==0 || mp.count(sum)==true)
            return true;
        else
            mp[sum]=true;
    }
    return false;
}
int main()
{
    int arr[]={4,2,-3,1,6};
    cout<<subArrayExists(arr,5);
}