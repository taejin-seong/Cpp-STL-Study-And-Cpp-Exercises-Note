/*
N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
