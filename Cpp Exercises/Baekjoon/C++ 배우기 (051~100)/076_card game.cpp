/*
JOI���� ī�� ������ �ϰ� �ִ�. �� ī�� ������ 5ȸ�� �������� ����Ǹ�, �� �������� �ºθ� �ϴ� �����̴�.
JOI���� �� ������ ������ ��Ÿ���� ������ �־����� ��, JOI���� ������ ���ϴ� ���α׷��� �ۼ��϶�.

https://www.acmicpc.net/problem/5522
*/

#include <iostream>

using namespace std;

int main(void)
{
	int num[5];
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cin>>num[i];
		sum += num[i];
	}
	
	cout<<sum<<'\n';
	
	return 0;
}
