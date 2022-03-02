/*
첫째 줄에는 별 2×N-1개, 둘째 줄에는 별 2×N-3개, ..., N번째 줄에는 별 1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다.

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
