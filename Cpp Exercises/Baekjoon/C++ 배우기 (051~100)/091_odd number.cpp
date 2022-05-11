/*
7���� �ڿ����� �־��� ��, �̵� �� Ȧ���� �ڿ������� ��� ��� �� ���� ���ϰ�, 
�� Ȧ���� �� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.
���� ���, 7���� �ڿ��� 12, 77, 38, 41, 53, 92, 85�� �־����� �̵� �� Ȧ���� 77, 41, 53, 85�̹Ƿ� �� ����
77 + 41 + 53 + 85 = 256 �� �ǰ�,
41 < 53 < 77 < 85
�̹Ƿ� Ȧ���� �� �ּڰ��� 41�� �ȴ�.

https://www.acmicpc.net/problem/2576
*/

#include <iostream>

using namespace std;

int main(void)
{
	int number;
	int odd_sum = 0;
	int odd_min = 100;
		
	for (int i = 0; i < 7; i++)
	{
		cin>>number;
				
		if (number % 2 != 0)
		{
			odd_sum += number;
			if (number < odd_min)
			{
				odd_min = number;
			}
		}
	}
			
	if (odd_sum == 0)
	{
		cout<< -1 <<'\n';
	}
			
	else 
	{
		cout<<odd_sum<<'\n'<<odd_min;						
	}
			
	return 0;
}
