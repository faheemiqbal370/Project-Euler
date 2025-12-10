//The sum of the primes below 10 is 2 +3 +5 +7 =17.
//Find the sum of all the primes below two million. 200 000 0

#include<bits/stdc++.h>
using namespace std;
int isprime(){
    vector<int>pr;
    long long sum=0;
    
    for(int j=2;j<2000000;j++){
int fact=0;
    for(int i=1;i*i<=j;i++){
        if(j%i==0) fact++;   
    }
    if(fact==1) pr.push_back(j);
}

for(int it : pr) {
    sum += it;
}
cout << sum;
}
int main() {
    isprime();
}
