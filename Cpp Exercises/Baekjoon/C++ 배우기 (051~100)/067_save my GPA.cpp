/*
������ �ٿ�� ������ ��ٰ� ����, �ڽ��� ���� ����� ������ �ñ�������. �л�ý��۵� ���� �������ϴ� �ٿ츦 ���� �����ֵ��� ����.

https://www.acmicpc.net/problem/10984
*/

#include <iostream>

using namespace std;

int main(void)
{
	
	int T;
	cin>>T;
	
	for (int i = 0; i < T; i++)
	{
		int total_C = 0;
		double total_G = 0.0;
		int N;
		
		cin>>N;
		
		for(int j = 0; j < N; j++)
		{
			int C;
			float G;
			
			cin>>C>>G;
			total_C += C;
			total_G += G * C;		
		}
		
		cout << fixed; 
		cout.precision(1);

		cout<<total_C<<' '<< total_G / total_C <<'\n';
	}
	
	
	return 0;
}
