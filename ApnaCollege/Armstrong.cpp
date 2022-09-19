#include<iostream>
#include<math.h>
using namespace std;
int armstrong(int n)
{
    int sum = 0;
    while(n>0)
    {
        int lstdigit = n % 10;
        sum += pow(lstdigit,3);
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n = 153;
    if(n==armstrong(n))
    {
        cout<<"armstrong";
    }else{
        cout<<"not armstrong";
    }
}