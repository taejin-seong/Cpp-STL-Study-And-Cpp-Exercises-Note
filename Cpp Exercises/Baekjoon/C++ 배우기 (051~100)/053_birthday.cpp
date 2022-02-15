/*
� �ݿ� �ִ� �л����� ������ �־����� ��, 
���� ���̰� ���� ����� ���� ���� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
