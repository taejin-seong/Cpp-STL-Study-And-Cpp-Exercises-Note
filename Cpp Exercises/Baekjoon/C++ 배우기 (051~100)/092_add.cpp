/*
10���� �۰ų� ���� �ڿ��� N���� �ָ� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/9085
*/

#include <iostream>

using namespace std;

int main(void)
{
	int T,N, num;
	
	cin>>T;
	for (int i = 0; i < T; i++)
	{
		cin>>N;
		int sum = 0;
		for (int j = 0; j < N; j++)
		{
			cin >> num;
			sum += num;
		}
		cout<<sum<<'\n';
	}
	
	return 0;
}
