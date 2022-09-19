//wap to cheak if agiven no. is power of 2
#include<iostream>
using namespace std;
 
 bool cheak(int n){
     return (n && !(n & n-1));
 }
 int main(){
     cout<< cheak(8);
 }