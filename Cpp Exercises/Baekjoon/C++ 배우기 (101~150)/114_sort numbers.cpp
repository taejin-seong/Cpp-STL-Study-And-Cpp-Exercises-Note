/*
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
		
		/* �ߺ��˻� */ 
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
