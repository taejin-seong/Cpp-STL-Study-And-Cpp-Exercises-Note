/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

https://www.acmicpc.net/problem/10991
*/

#include <iostream>

using namespace std;

int main(void) 
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			cout << " ";
		}
		
		for (int j = 0; j < 2 * (i + 1) - 1; j++) 
		{
			if (j % 2 == 0)
			{
				cout << "*";	
			} 
			
			else
			{
				cout << " ";	
			} 
		}
		
		cout << "\n";
	}
	
	return 0;
}
