/*
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

https://www.acmicpc.net/problem/2523
*/

#include <iostream>

using namespace std;

int main(void) 
{
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		
		cout << "\n";
	}
	
	for (int i = 1; i < N; i++) 
	{
		for (int j = 0; j < N - i; j++)
		{
			cout << "*";		
		}
		
		cout << "\n";
	}
	
	return 0;
}
