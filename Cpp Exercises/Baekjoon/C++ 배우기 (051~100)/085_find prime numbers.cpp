/*
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

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
		// 1부터 판별하는 수 전까지 나눠보고 (divsior가 dividend (temp)보다 크면 0.xxx로 소수를 구하지 못함).
		// 나머지가 0이 안나온다면 소수로 정의. 
		for (int div = 1; div <= temp; div++)
		{
			if (temp % div == 0)
			{
				count++;
			}
		}
		if (count == 2) // count가 2라는 것은 1과 자기 자신만을 약수로 가지는 '소수'임을 의미.  
		{
			res++;
		}	
		count = 0;
	}
	cout<<res;
	
	return 0;
}
