/*
9���� ���� �ٸ� �ڿ����� �־��� ��, 
�̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� ���, ���� �ٸ� 9���� �ڿ��� 
3, 29, 38, 12, 57, 74, 40, 85, 61 �� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.

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
	
	//(find(v.begin(), v.end(), *iter) - v.begin()) + 1 ~ +1�� ���ٸ� �ε�����ġ ��, ������ ��ġ�� �ǹ� 
	cout << *iter <<'\n' << (find(v.begin(), v.end(), *iter) - v.begin()) + 1 ;
	
	return 0;
}
