/*
�Ǻ���ġ ���� 0�� 1�� �����Ѵ�. 0��° �Ǻ���ġ ���� 0�̰�, 1��° �Ǻ���ġ ���� 1�̴�. �� ���� 2��° ���ʹ� �ٷ� �� �� �Ǻ���ġ ���� ���� �ȴ�.

�̸� ������ �Ẹ�� Fn = Fn-1 + Fn-2 (n �� 2)�� �ȴ�.

n=17�϶� ���� �Ǻ���ġ ���� �Ẹ�� ������ ����.

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

n�� �־����� ��, n��° �Ǻ���ġ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/2748
*/

#include <iostream>

using namespace std;


long long fiboarr[100] = {0,1,};


long long fibo(int num)
{
	if(num == 0 || num == 1)
	{
		return fiboarr[num];
	}
	
	else if(fiboarr[num] == 0)
	{
		fiboarr[num] = fibo(num -1) + fibo(num -2);
	}
	
	return fiboarr[num];
}


int main(void)
{
	int n;
	cin>>n; 
	
	cout<< fibo(n);

}
