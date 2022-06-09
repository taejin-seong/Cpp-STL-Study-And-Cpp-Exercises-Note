/*
�����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. 
�ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.
���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.
�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/1546
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;
	cin>>N;
	
	float current_grade[N];
	float M = 0;
	
	for (int i = 1; i <= N; i++)
	{
		cin>>current_grade[i];
		M = max(M, current_grade[i]);
	}
	
	float new_grade[N];
	float average, sum = 0;
	
	for (int i = 1; i <= N; i++)
	{
		new_grade[i] = (current_grade[i] / M ) *100;
		sum += new_grade[i];
	}
	
	average = sum / N;
	
	cout<< average;
	return 0;
}
