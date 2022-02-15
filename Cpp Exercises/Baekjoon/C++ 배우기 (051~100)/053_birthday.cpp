/*
어떤 반에 있는 학생들의 생일이 주어졌을 때, 
가장 나이가 적은 사람과 가장 많은 사람을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/5635
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{

	int num;
	
	cin>>num;
	
	vector<pair<pair<int, int>, pair<int, string> > > v(num);
	
	for(int i = 0; i < num; i++)
	{
	   cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
	}
	
	sort(v.begin(), v.end());
	
	cout << v[num-1].second.second << "\n" << v[0].second.second << "\n";

	return 0;
}
