/*
�ҷ������̿� �ѽ��̳״� �ƺ����� ������ �����ֽŴ�. 
������ �ѽ����� �������� ���� ���̰� �����ʾ� ������ �Ѿ�� ������ �����ϰ� ������ ���� ������ ���� �ο��� ����. �ų� �ҷ������̶����� �ƺ����� ������ �ڽĵ鿡�� �ִ��� ���� ������ ������ �ֽñ� ���ϸ� 
�ڽſ��Դ� ��� ���ԵǴ����� �˰� �;� �ϽŴ�. �̷� �ƺ����� ���ͼ� �������� �ο��� ���ƺ���.

https://www.acmicpc.net/problem/10178
*/

#include <iostream>

using namespace std;
/*
class Candy
{
	private:
		int test_case;
		int candy_num;
		int brothers_num;
		
	public:
		Candy(int test = 0, int candy = 0, int brothers = 0) : test_case(test), candy_num(candy), brothers_num(brothers)
		{ }
		
		void GetCandyInfo(void)
		{
			cin>>test_case;
			for (int i = 0; i < test_case; i ++)
			{
				cin>>candy_num>>brothers_num;
		
				int val1[test_case];
				int val2[test_case];
		
				val1[i]= candy_num / brothers_num;	
				val2[i] = candy_num % brothers_num;
		
				cout<<"You get "<<val1[i]<<" piece(s) and your dad gets "<<val2[i]<<" piece(s)."<<'\n';	
			}
		}
		
};

int main(void)
{
	Candy c;
	c.GetCandyInfo();
	
	return 0;
}
*/

int main(void)
{
	int num = 0;
	int candy_num, brothers_num;
	
	cin>>num;
	for (int i = 0; i < num; i ++)
	{
		cin>>candy_num>>brothers_num;
		
		int val1[num];
		int val2[num];
		
		val1[i]= candy_num / brothers_num;	
		val2[i] = candy_num % brothers_num;
		
		cout<<"You get "<<val1[i]<<" piece(s) and your dad gets "<<val2[i]<<" piece(s)."<<'\n';	
	}
	
	return 0;
}

