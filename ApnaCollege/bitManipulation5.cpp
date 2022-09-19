//WAP to find 2 unike no. {2,4,6,7,4,5,6,2}
#include<iostream>
using namespace std;

bool setBit(int n, int pos){
    return ((n &(1<<pos))!=0);
}

void unique(int arr[],int n ){
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    int setbit=0;
    int pos=0;
    int tempxor=xorsum;
    while (setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1)){
                newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl<<(tempxor^newxor)<<endl;    
}
 
int main(){
    int arr[]={2,4,6,7,4,5,6,2};
    unique(arr,7);
    return 0;
}