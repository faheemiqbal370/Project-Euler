//A Pythagorean triplet is a set of three natural numbers, 𝑎 <𝑏 <𝑐, for which, 𝑎2+𝑏2=𝑐2.
//For example, 32 +42 =9 +16 =25 =52.
//There exists exactly one Pythagorean triplet for which 𝑎 +𝑏 +𝑐 =1000.
//Find the product 𝑎⁢𝑏⁢𝑐.
#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            for(int k=1;k<=1000;k++){
                int c=i+j+k;
                if(c==1000 && i*i+j*j==k*k) {
                cout<<"i= "<<i<<" j= "<<j<<" & k= "<<k<<endl;
                cout<<i*j*k<<endl;
                }
            }
        }

    }

}