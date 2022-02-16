/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10950
*/


#include <iostream>

using namespace std;

int main(void)
{
	int t,a,b;
	
	cin>>t;
	int buf[t];
	
	for(int i = 0; i < t; i++)
	{
		cin>>a>>b;
		buf[i] = a+b;
	}
	
	for (int j = 0; j < t; j++)
	{
	  cout<<buf[j]<<'\n';		
	}
	
	return 0;
}
