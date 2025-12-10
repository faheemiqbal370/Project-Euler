#include<bits/stdc++.h>
using namespace std;
int isprime(){
 vector<int>pr;
    for(int j=2;j<2000000;j++){ //Find all prime numbers from 2 to 2 Million
        int fact=0;
    for(int i=1;i*i<=j;i++){
        if(j%i==0) fact++;   
    }
    if(fact==1) pr.push_back(j); // save the primes in vector
}
}