/*
���� ���� n�� �־����� ��, �̸� �������� ��Ÿ���� �� 1�� ��ġ�� ��� ã�� ���α׷��� �ۼ��Ͻÿ�. 
������ ��Ʈ(least significant bit, lsb)�� ��ġ�� 0�̴�.

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
