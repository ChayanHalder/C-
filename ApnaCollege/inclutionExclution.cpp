#include<iostream>
using namespace std;

int divisible(int a,int b,int n){
    
    int C1=n/a;
    int C2=n/b;
    int C3=n/(a*b);

    return (C1+C2)-C3;
}

int main(){

    int a=5,b=7,n=100;
    cout<<divisible(a,b,n);
}