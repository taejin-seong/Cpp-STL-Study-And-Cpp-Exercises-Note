/*
9개의 서로 다른 자연수가 주어질 때, 
이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
예를 들어, 서로 다른 9개의 자연수 
3, 29, 38, 12, 57, 74, 40, 85, 61 이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.

https://www.acmicpc.net/problem/2562
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> v;
	vector<int>::iterator iter;
		
	int N = 9;
	int temp = 0;

	
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp > 100) return 0;	
			
		v.push_back(temp);
	}
	
	iter = max_element(v.begin(), v.end());
	
	//(find(v.begin(), v.end(), *iter) - v.begin()) + 1 ~ +1이 없다면 인덱스위치 즉, 원소의 위치를 의미 
	cout << *iter <<'\n' << (find(v.begin(), v.end(), *iter) - v.begin()) + 1 ;
	
	return 0;
}
