/*
ù° �ٿ��� �� 2��N-1��, ��° �ٿ��� �� 2��N-3��, ..., N��° �ٿ��� �� 1���� ��� ����
���� ����� �������� ��Ī�̾�� �Ѵ�.

https://www.acmicpc.net/problem/2443
*/

#include <iostream>

using namespace std;
 
int main(void)
{
	int N;
	cin >> N;
 
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < i; j++)
		{
			cout << ' ';			
		}
		
		for (int j = 1; j <= (2 * (N - i)) - 1; j++)
		{
			cout << '*';			
		}		
		cout << '\n';
	}
 
	return 0;
}
