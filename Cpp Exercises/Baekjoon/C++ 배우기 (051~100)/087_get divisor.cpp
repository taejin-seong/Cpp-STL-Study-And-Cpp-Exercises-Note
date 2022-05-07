/*
� �ڿ��� p�� q�� ���� ��, ���� p�� q�� �������� �� �������� 0�̸� q�� p�� ����̴�. 

6�� ���� ���

6 �� 1 = 6 �� 0
6 �� 2 = 3 �� 0
6 �� 3 = 2 �� 0
6 �� 4 = 1 �� 2
6 �� 5 = 1 �� 1
6 �� 6 = 1 �� 0
�׷��� 6�� ����� 1, 2, 3, 6, �� �� ���̴�.

�� ���� �ڿ��� N�� K�� �־����� ��, N�� ����� �� K��°�� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/2501
*/

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int N, K;
	list<int> lt;
	
	cin>>N>>K;
	
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			lt.push_back(i);
		}
	}
	
	list<int>::iterator iter = lt.begin();
	lt.sort(); //�������� (less) ����		

	if (lt.size() < K)
	{
		cout<<0;
	}
	
	else 
	{
		for (int j = 1; j < K; j++)
		{
			iter++;
		}
	
		cout << *iter;		
	}
	
	return 0;
}
