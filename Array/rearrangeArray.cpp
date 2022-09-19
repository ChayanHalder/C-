//rearange arr in positive & nagative items with O(1) space
#include<iostream>
using namespace std;

void rightRotate(int arr[],int from,int to)
{
    int temp=arr[to];
    for(int i=to;i>from;i++)
        arr[i]=arr[i-1];
    arr[from]=temp;
}

void rearrange(int arr[],int n)
{
    int wrongIndex=-1;
    for(int i=0;i<n;i++)
    {
        if(wrongIndex != -1)
        {
            if((arr[wrongIndex]>=0 && arr[i]<0) || (arr[wrongIndex]<0 && arr[i]>=0))
            {
                rightRotate(arr,wrongIndex,i);
                if(i-wrongIndex>=2)
                    wrongIndex+=2;
                else
                    wrongIndex=-1;
            }
        }else{
            if((arr[i]<0 && i%2 == 1) || (arr[i]>=0 && i%2 == 0))
                wrongIndex = -1;
        }
    }
}

int main()
{
    int arr[]={1,2,3,-4,-1,4};
    int n= 6;
    rearrange(arr,n);
}