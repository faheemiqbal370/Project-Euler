// The sum of the squares of the first ten natural numbers is 1^2 + 2^2 + ... + 10^2 = 385.
// The square of the sum of the first ten natural numbers is,(1 + 2 + ... + 10)^2 = 55^2 = 3025.
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<bits/stdc++.h>
using namespace std;

int square(int s){
    int sqs=s*s;
    return sqs;          // sq of sum of ist n natural numbers
}

int sum(int n){
    int s=(n*(n+1))/2;
    int sqs=square(s);
    return sqs;
}


int s2(int n){
    int sq2=0;
    for(int i=1;i<=n;i++){
        sq2=sq2+i*i;
    }
    return sq2;
}

int main(){
    int n;
    cout<<"enter the nth number"<<endl;
    cin>>n;
    int sq1=sum(n);
    int sq2=s2(n);

    cout<<"the difference is "<<sq1-sq2;

}