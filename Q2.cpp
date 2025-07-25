// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
//  By considering the terms in the Fibonacci sequence whose values do not exceed four million(4,000,000), find the sum of the even-valued terms. -->

#include <iostream>
using namespace std;

int fib(int &f0, int &f1, int &fnext)
{
    int sum=0;

    while (fnext <= 4000000)
    {
        fnext = f0 + f1;
        if (fnext % 2 == 0)
        {
            sum = sum + fnext;
        }
        f0 = f1;
        f1 = fnext;
    }
    return sum + 2;
}
int main()
{
    int a = 1;
    int b = 2;
    int c = 0;
    int summ = fib(a, b, c);
    cout << "The sum of even terms is " << summ;
}
