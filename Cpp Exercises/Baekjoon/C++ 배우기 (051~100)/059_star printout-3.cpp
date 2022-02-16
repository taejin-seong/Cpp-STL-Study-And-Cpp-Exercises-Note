/*
첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

https://www.acmicpc.net/problem/2440
*/


#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;	
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			cout<<'*';
		}
		cout<<'\n';
	}
	
	return 0;
}

