/*
������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

https://www.acmicpc.net/problem/10995
*/

#include <iostream>

using namespace std;

int main(void) 
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		if (i % 2 == 0) 
		{
			for (int j = 0; j < n; j++) 
			{
				cout << "* ";	
			}
		}
		else 
		{
			for (int j = 0; j < n; j++)
			{
				cout << " *";	
			 } 
		}
		
		cout << "\n";
	}
	
	return 0;
}
