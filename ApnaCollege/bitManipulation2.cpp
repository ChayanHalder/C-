//WAP to count the number of ones in binary representation of numbers
#include<iostream>
using namespace std;

int count(int n){
    int count=0;
    while(n){
        n = n & n-1;
        count++;
    }
    return count;
}
int main()
{
    cout<<count(19);
}