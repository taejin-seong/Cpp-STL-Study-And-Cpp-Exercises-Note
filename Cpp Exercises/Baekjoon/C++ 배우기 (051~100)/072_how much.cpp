/*
�غ��̴� �б��� �ٴϸ鼭 ƴƴ�� �� ������ �ڵ����� ����� �Ѵ�. �ڵ����� ���� ���� �ɼ��� ���Խ�ų �� �ִµ� �غ��̴� ������ ������ ���� ���ϱ� ������ ģ�� �¿��̿��� ������ û�ߴ�. ������ �¿��̵� ������ ������ ���Ѵ�.
�ҽ��� �� �� ģ���� ���� ��� �ɼ��� �־��� �ڵ����� �����ϴµ� �ʿ��� �׼��� ����� ����.

https://www.acmicpc.net/problem/9325
*/

#include <iostream>

using namespace std;

int main(void)
{
	int car_cost, option_num, spec_option_num, spec_option_cost;
	int test_case;
	
//	cout<<"�׽�Ʈ ���̽� �Է� : ";
	cin>>test_case;
	
	for (int i = 0; i < test_case; i++)
	{
		int total_cost = 0;
		
//		cout<<"�ڵ����� ���� : "; 
		cin>>car_cost;
		
//		cout<<"���� �ٸ� �ɼ��� ���� : "; 
		cin>>option_num;
		
		for (int j = 0; j < option_num; j++)
		{
//			cout<<"Ư�� �ɼ� ������ ���� : ";
			cin>>spec_option_num;
			cin>>spec_option_cost;
			
			if ((spec_option_num || spec_option_cost) == 0)
			{
				break;
			}
			
			total_cost += spec_option_num * spec_option_cost;
		}
		
		total_cost += car_cost;
		cout<<total_cost<<'\n';
	}
	
	
	return 0;
}
