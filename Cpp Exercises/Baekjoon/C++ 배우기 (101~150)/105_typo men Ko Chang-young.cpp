/*
고창영은 맨날 오타를 낸다. 
창영이가 오타를 낸 문장과 오타를 낸 위치가 주어졌을 때, 오타를 지운 문자열을 출력하는 프로그램을 작성하시오.
창영이는 오타를 반드시 1개만 낸다.

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
			if (i != p.first - 1){ // 오타인 인덱스의 문자만 빼고 출력 
				cout<<p.second[i];	
			}
		}
		cout<<'\n';
	}
	
	return 0;
}
