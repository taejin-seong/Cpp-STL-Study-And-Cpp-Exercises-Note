/*
0보다 크거나 같은 정수 N이 주언진다. 이때, N!을 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10872 
*/

#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n > 2)
    {
	    n *= factorial(n-1);
   	 	return n;
	}
}

int main(void)
{
    int num, result = 1;
    cin>>num;
    if(num!=0)
    {
        result = factorial(num);	
	}
    cout<<result;
}
