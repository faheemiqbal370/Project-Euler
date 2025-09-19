// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 X 99.
// Find the largest palindrome made from the product of two 3-digit numberss.
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int orginal,reversed=0,digit;
    orginal=n;
    while(n>0){
        digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    return orginal==reversed;   
}
int main(){
    int num1=0,num2=0,maxpal=0;
    for(int a=999;a>=100;a--){
        for(int b=a;b>=100;b--){
        int n=a*b;
        if(palindrome(n)&& n>maxpal) {
            num1 = a;
            num2 = b;
            maxpal=n;
        }
    }
}
    cout<<"largest number is " <<maxpal<<" numbers are "<<num1<<" & "<<num2;
}