/*
n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
