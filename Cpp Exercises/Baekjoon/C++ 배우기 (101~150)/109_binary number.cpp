/*
양의 정수 n이 주어졌을 때, 이를 이진수로 나타냈을 때 1의 위치를 모두 찾는 프로그램을 작성하시오. 
최하위 비트(least significant bit, lsb)의 위치는 0이다.

https://www.acmicpc.net/problem/3460
*/

#include <iostream>

using namespace std;

int main(void)
{
	int T,n;
	cin>>T;
	
	while (T--){
		cin>>n;
		int cnt = 0;
		
		while (n > 0){
			if (n%2 == 1){
				cout<<cnt<<" ";
			}
			n /= 2;
			cnt++;
		}	
	}		
	return 0;
}
