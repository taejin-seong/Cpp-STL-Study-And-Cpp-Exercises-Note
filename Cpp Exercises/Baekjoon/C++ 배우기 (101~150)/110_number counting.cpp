/*
*/

#include <iostream>

using namespace std;

int main(void)
{
	int N, Num, v;
	int cnt = 0;
	cin>>N;
	
	int Arr[N] = {};
	
	for (int i = 0; i < N; i++){
		cin>>Num;
		Arr[i] = Num;
	}
	
	cin>>v;
	
	for (int i = 0; i < N; i++){
		if (Arr[i] == v){
			cnt += 1;
		}
	}
	
	cout<< cnt;
	return 0;
}
