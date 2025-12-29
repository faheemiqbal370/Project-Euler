// What 10001st prime number
// one method is brute force and to calculate straight from one till i found 10001st 
// whats the other method??????
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(long long i=3;1LL*i*i <= n;i+=2){
        if(n%i==0){
            return false;
        }    
    }
    return true;
}


int main(){
    int count=0;
    int n=1;

while(count<10001){
    n++;
    if(prime(n)){
        count++;
}
}
cout<<"10001st prime is "<<n;
return 0;
}


