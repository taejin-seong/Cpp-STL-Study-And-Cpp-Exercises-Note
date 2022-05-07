/*
어떤 자연수 p와 q가 있을 때, 만일 p를 q로 나누었을 때 나머지가 0이면 q는 p의 약수이다. 

6을 예로 들면

6 ÷ 1 = 6 … 0
6 ÷ 2 = 3 … 0
6 ÷ 3 = 2 … 0
6 ÷ 4 = 1 … 2
6 ÷ 5 = 1 … 1
6 ÷ 6 = 1 … 0
그래서 6의 약수는 1, 2, 3, 6, 총 네 개이다.

두 개의 자연수 N과 K가 주어졌을 때, N의 약수들 중 K번째로 작은 수를 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2501
*/

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int N, K;
	list<int> lt;
	
	cin>>N>>K;
	
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			lt.push_back(i);
		}
	}
	
	list<int>::iterator iter = lt.begin();
	lt.sort(); //오름차순 (less) 정렬		

	if (lt.size() < K)
	{
		cout<<0;
	}
	
	else 
	{
		for (int j = 1; j < K; j++)
		{
			iter++;
		}
	
		cout << *iter;		
	}
	
	return 0;
}
