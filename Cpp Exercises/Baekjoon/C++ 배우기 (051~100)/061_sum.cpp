/*
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/8393
*/

#include <iostream>

using namespace std;

int main(void)
{
	int n, sum = 0;
	cin>>n;
	
	for(int i = 1; i <= n; i++)
	{
		sum += i;
	}
	
	cout<<sum;
	
	return 0;
}
