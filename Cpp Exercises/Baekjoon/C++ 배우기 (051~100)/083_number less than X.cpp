/*
���� N���� �̷���� ���� A�� ���� X�� �־�����. 
�̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/10871
*/

#include <iostream>

using namespace std;

int main(void) 
{
	int N,X;
	
	cin>>N>>X;
	for (int i = 0; i < N; i++)
	{
		int A[N];
		cin>>A[i];
		
		if (A[i] < X)
		{
			cout<<A[i]<<' ';
		}
	
	}
	
	return 0;
}
