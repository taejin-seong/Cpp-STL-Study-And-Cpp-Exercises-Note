/*
�������� ������ �ܼ�Ʈ�� ���� �� �ִ� �÷��װ� �ϳ��ۿ� ����. �����̴� ���� ��ǻ�͸� ������ �ִµ�, ��ǻ���� ���� ������ ��� �ذ��ϴ� ���ϱ�?
�ϳ��� �÷��װ� �ְ�, N���� ��Ƽ���� �ִ�. �� ��Ƽ���� �� ���� �÷��׷� �̷���� �ִٰ� �Ѵ�. �ִ� �� ���� ��ǻ�͸� ������ ������ �� ������?

https://www.acmicpc.net/problem/2010
*/

#include <iostream>

using namespace std;

int main(void)
{
	int plug, multi_tap;
	int total_computer = 0;
	cin>>multi_tap;
	
	for (int i = 0; i < multi_tap; i++)
	{
		cin>>plug;
		
		total_computer += plug;
	}
	
	total_computer -= (multi_tap - 1); //�ᱹ ������ ��Ƽ���� �ٸ� �ϳ��� ��Ƽ�� �÷��׿�  �ƾ������� -1 
	
	cout<<total_computer;
	
	return 0;
} 
