/*
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/10950
*/


#include <iostream>

using namespace std;

int main(void)
{
	int t,a,b;
	
	cin>>t;
	int buf[t];
	
	for(int i = 0; i < t; i++)
	{
		cin>>a>>b;
		buf[i] = a+b;
	}
	
	for (int j = 0; j < t; j++)
	{
	  cout<<buf[j]<<'\n';		
	}
	
	return 0;
}
