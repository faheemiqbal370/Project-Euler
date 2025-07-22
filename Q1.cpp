// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
// The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum=0;
    for(int i=1;i<=1000;i++){
        if(i%a==0 || i%b==0){
            sum=sum+i; 
        }
    }
    return sum;
}
int main(){

    int a=3;
    int b=5;
    
    int result=sum(a,b);

    cout<<"The sum of multiples of 3 and 5 below 1000 is "<<result;
    return 0;

}