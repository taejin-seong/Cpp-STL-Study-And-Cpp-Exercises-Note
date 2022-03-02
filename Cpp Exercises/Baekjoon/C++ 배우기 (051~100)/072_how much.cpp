/*
해빈이는 학교를 다니면서 틈틈히 번 돈으로 자동차를 사려고 한다. 자동차에 여러 가지 옵션을 포함시킬 수 있는데 해빈이는 덧셈과 곱셈을 하지 못하기 때문에 친구 태완이에게 도움을 청했다. 하지만 태완이도 덧셈과 곱셈을 못한다.
불쌍한 이 두 친구를 위해 모든 옵션이 주어진 자동차를 구매하는데 필요한 액수를 계산해 주자.

https://www.acmicpc.net/problem/9325
*/

#include <iostream>

using namespace std;

int main(void)
{
	int car_cost, option_num, spec_option_num, spec_option_cost;
	int test_case;
	
//	cout<<"테스트 케이스 입력 : ";
	cin>>test_case;
	
	for (int i = 0; i < test_case; i++)
	{
		int total_cost = 0;
		
//		cout<<"자동차의 가격 : "; 
		cin>>car_cost;
		
//		cout<<"서로 다른 옵션의 개수 : "; 
		cin>>option_num;
		
		for (int j = 0; j < option_num; j++)
		{
//			cout<<"특정 옵션 개수와 가격 : ";
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
