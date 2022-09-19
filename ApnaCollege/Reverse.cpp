#include<iostream>
using namespace std;
int reverse(int n)
{
    int rev = 0;
    while(n>0)
    {
        int ldigit = n % 10;
        rev = rev * 10 + ldigit;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n = 123;
    cout<<reverse(n);
}