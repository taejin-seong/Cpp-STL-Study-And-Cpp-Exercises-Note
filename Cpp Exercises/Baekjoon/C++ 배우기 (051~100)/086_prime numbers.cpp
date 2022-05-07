/*
�ڿ��� M�� N�� �־��� �� M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ��� �̵� �Ҽ��� �հ� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.
���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� �Ҽ��� 61, 67, 71, 73, 79, 83, 89, 97 �� 8���� �����Ƿ�, 
�̵� �Ҽ��� ���� 620�̰�, �ּڰ��� 61�� �ȴ�.

https://www.acmicpc.net/problem/2581
*/

#include <iostream>

using namespace std;

int main(void)
{
	int M, N;	
	int sum = 0;
	int count = 0;
	int min  = -1;
	
	cin>>M>>N;
	if (M>N)
	{
		return 0;
	}
	
	
	for (int i = M; i <= N; i++)
	{
		for (int div = 1; div <= i; div++)
		{
			if (i % div == 0)
			{
				count++;
			}
		}
		
		if (count == 2)   
		{
			if (min == -1)
			{
				min = i; //min�� -1���� �ּҰ����� ��ü (ó�� count==2�� ���� �ּڰ�) 
			}
			
			sum += i;
		}
		
		count = 0;	
	}
	
	if (min == -1) // min�� -1�� �����ϴ� ��� �Ҽ��� ������ �ǹ�. 
	{
		cout<<-1;
	}
	
	else
	{
		cout<<sum<<'\n'<<min;	
	}
	
	return 0;
}

