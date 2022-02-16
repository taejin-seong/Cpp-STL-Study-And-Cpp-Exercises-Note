/*
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

https://www.acmicpc.net/problem/2438
*/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i;  j++)
		{
			cout<<'*';
		}
		
		cout<<'\n';
	}
}
