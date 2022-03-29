/*
정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 
이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

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
