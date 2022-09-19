#include<iostream>
#include<cmath>
using namespace std;
void primeNo(int n)
{
    bool flag=0;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<"not Prime";
    }else{
        cout<<"prime";
    }
}
int main()
{
    int  n=15;
    primeNo(n);
}