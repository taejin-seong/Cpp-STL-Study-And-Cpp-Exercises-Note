/*
자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.
예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 
이들 소수의 합은 620이고, 최솟값은 61이 된다.

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
				min = i; //min을 -1에서 최소값으로 대체 (처음 count==2된 값은 최솟값) 
			}
			
			sum += i;
		}
		
		count = 0;	
	}
	
	if (min == -1) // min이 -1을 유지하는 경우 소수가 없음을 의미. 
	{
		cout<<-1;
	}
	
	else
	{
		cout<<sum<<'\n'<<min;	
	}
	
	return 0;
}

