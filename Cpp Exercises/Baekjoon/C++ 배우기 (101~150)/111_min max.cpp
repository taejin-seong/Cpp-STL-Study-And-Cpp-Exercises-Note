/*
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/10818
*/

#include <iostream>

using namespace std;

int main(void)
{
	int N; 
	int min = 1000001;
	int max = -1000001;
	cin>>N;
	
	int Number[N];
	
	for (int i = 0; i < N; i++){
		
		cin>>Number[i];
		
		if (max < Number[i]){
			max = Number[i];
		}
		
		if (min > Number[i]){
			min = Number[i];
		}		
	}
	
	cout<<min<<' '<<max;
		
	return 0;
}
