/*
��â���� �ǳ� ��Ÿ�� ����. 
â���̰� ��Ÿ�� �� ����� ��Ÿ�� �� ��ġ�� �־����� ��, ��Ÿ�� ���� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
â���̴� ��Ÿ�� �ݵ�� 1���� ����.

https://www.acmicpc.net/problem/2711
*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int T;
	string typo;
	pair<int, string> p;
	
	cin>>T;
	
	for(int i = 0; i < T; i++){
		cin>>p.first;
		cin>>p.second;
		
		for (int i = 0; i < (int)p.second.length(); i++){
			if (i != p.first - 1){ // ��Ÿ�� �ε����� ���ڸ� ���� ��� 
				cout<<p.second[i];	
			}
		}
		cout<<'\n';
	}
	
	return 0;
}
