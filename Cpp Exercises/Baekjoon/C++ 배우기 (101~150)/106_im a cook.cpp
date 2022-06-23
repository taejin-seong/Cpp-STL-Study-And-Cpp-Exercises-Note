/*
"���� �丮���"�� �ټ� �����ڵ��� ������ �丮 �Ƿ��� �˳��� Ƽ�� �����̴�. 
�� �����ڴ� �ڽ��ִ� ������ �ϳ��� ��������, ���� �ٸ� ����� ������ ������ �����ش�. 
������ 1������ 5������ �ִ�.
�� �����ڰ� ���� ������ �ٸ� ����� ���� �� ������ ���̴�. 
�� ���� ����ڴ� ���� ���� ������ ���� ����� �ȴ�.
�� �����ڰ� ���� �� ������ �־����� ��, ����ڿ� ���� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/2953
*/

#include <iostream>

using namespace std;

int main(void)
{
	int arr[5][5] = { {0,} };
	int maxScoreIndex = 0;

	for (int i = 0; i < 5; ++i)
	{
		int sum = 0;

		for (int j = 0; j < 4; ++j){
			cin >> arr[i][j];
			sum += arr[i][j];
		}
		
		arr[i][4] = sum;
		
		if (arr[i][4] > arr[maxScoreIndex][4]) {
		maxScoreIndex = i;
		}
	}

	cout << maxScoreIndex+1 << ' ' << arr[maxScoreIndex][4]<<endl;
	
	return 0;
}
