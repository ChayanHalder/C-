#include<iostream>
using namespace std;

int calculate(int price[], int n)
{
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int profit=price[j]-price[i];
            if(profit>maxprofit)
                maxprofit=profit;
        }
    }
    return maxprofit;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    int n=6;
     
    cout<<calculate(arr,n);
}