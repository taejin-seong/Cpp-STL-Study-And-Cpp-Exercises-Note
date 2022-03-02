/*
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 3��, ..., N��° �ٿ��� �� 2��N-1���� ��� ����
���� ����� �������� ��Ī�̾�� �Ѵ�.

https://www.acmicpc.net/problem/2442
*/

#include <iostream>

using namespace std;
 
int main(void)
{
	int N;
	cin >> N;
 
	for (int i = 1; i <= N; i++) 
	{
		for (int j = 1; j <= N - i; j++)
		{
			cout << ' ';			
		}

		for (int j = 1; j <= (2 * i) - 1; j++)
		{
			cout << '*';			
		}
		cout << '\n';
	}
 
	return 0;
}
