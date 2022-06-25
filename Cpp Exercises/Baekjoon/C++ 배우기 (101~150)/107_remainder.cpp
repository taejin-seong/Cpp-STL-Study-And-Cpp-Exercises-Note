/*
�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. 
���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�. 
�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. 
�� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/3052
*/

#include <iostream>

using namespace std;

int main(void)
{
	int Dividend;
	int Divisor = 42;
	int Remainder[Divisor] = {0, };
	int cnt = 0; 
	
	for (int i = 0; i < 10; i ++){
		cin>>Dividend;
		Remainder[Dividend % Divisor]++;
	}
	
	for (int i = 0; i < Divisor; i++){
		if (Remainder[i] != 0){
			cnt++;
		}
	}
	
	cout<<cnt<<'\n';
	return 0;
}

