/*
�� ���� �ڿ����� �Է¹޾� �ִ� ������� �ּ� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
