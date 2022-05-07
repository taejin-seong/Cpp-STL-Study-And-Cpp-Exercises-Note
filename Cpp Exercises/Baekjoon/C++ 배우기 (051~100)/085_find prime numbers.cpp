/*
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/1978
*/

#include <iostream>

using namespace std;

int main(void)
{
	int N, temp;
	int count, res = 0;
	
	cin>>N;
	
	for (int i = 0; i < N; i++)
	{
		cin>>temp;
		// 1���� �Ǻ��ϴ� �� ������ �������� (divsior�� dividend (temp)���� ũ�� 0.xxx�� �Ҽ��� ������ ����).
		// �������� 0�� �ȳ��´ٸ� �Ҽ��� ����. 
		for (int div = 1; div <= temp; div++)
		{
			if (temp % div == 0)
			{
				count++;
			}
		}
		if (count == 2) // count�� 2��� ���� 1�� �ڱ� �ڽŸ��� ����� ������ '�Ҽ�'���� �ǹ�.  
		{
			res++;
		}	
		count = 0;
	}
	cout<<res;
	
	return 0;
}
