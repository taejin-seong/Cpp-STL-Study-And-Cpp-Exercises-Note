/*
두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2609
*/


#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	int r;
	
	while(b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	
	return a;
}

int LCM(int a, int b)
{
	return (a * b) / GCD(a, b);
}

int main(void)
{
	int n1, n2;
	
	cin>>n1>>n2;
	cout<<GCD(n1, n2)<<'\n';
	cout<<LCM(n1, n2);
	
	return 0;
	
}
