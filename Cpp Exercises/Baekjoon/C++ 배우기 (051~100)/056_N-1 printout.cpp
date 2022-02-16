/*
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2742
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;	
	
	for (int i = n; i > 0; i--)
	{
		cout<<i<<'\n';
	}
	
	return 0;
}
