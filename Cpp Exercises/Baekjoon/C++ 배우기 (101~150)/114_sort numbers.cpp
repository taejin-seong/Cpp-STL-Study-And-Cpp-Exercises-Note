/*
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/2750
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N; 
	cin>>N;
	if (N < 1 || N > 1001){
		return 0;
	}
	
	int num[N] = {};
	
	for (int i = 0; i < N; i++){
		cin >> num[i];	
		
		if (abs(num[i]) > 1000){
			return 0;
		}
		
		/* 중복검사 */ 
		int j = 0;		
		
		while (j < i){
			if (num[i] == num[j]){
				return 0;
			}
			j++;
		}		
	}
	
	sort(num, num + N);
	
	for (int i = 0; i < N; i++){
		cout<< num[i] << '\n';
	}
	
	return 0;
}
