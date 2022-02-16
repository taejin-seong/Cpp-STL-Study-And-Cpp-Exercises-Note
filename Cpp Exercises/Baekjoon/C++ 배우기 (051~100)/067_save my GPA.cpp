/*
게으른 근우는 열심히 놀다가 문득, 자신의 학점 평균이 얼마일지 궁금해졌다. 학사시스템도 들어가기 귀찮아하는 근우를 위해 구해주도록 하자.

https://www.acmicpc.net/problem/10984
*/

#include <iostream>

using namespace std;

int main(void)
{
	
	int T;
	cin>>T;
	
	for (int i = 0; i < T; i++)
	{
		int total_C = 0;
		double total_G = 0.0;
		int N;
		
		cin>>N;
		
		for(int j = 0; j < N; j++)
		{
			int C;
			float G;
			
			cin>>C>>G;
			total_C += C;
			total_G += G * C;		
		}
		
		cout << fixed; 
		cout.precision(1);

		cout<<total_C<<' '<< total_G / total_C <<'\n';
	}
	
	
	return 0;
}
