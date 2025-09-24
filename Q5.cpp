//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include<bits/stdc++.h>
using namespace std;

int gcd(long long a,long long b){
    long long gcd =0;
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
         return (a == 0) ? b : a;
    }

long long lcm(long long a,long long b){
    long long lcm=a*b/(gcd(a,b));
    return lcm;

}

long long spn(){
   long long spn=0;
    long long lcm1=1;
    for(long long i=2 ; i<=20;i++){
        lcm1=lcm(lcm1,i);
        spn=lcm1;
    }
    return lcm1;
    // cout<<"The smallest is "<<spn;
}

int main(){
   int sp = spn();
   cout<<"The smallest is "<<sp;


}