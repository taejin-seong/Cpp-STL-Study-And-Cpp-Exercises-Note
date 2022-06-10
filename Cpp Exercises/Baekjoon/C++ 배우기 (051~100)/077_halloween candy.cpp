/*
할로윈데이에 한신이네는 아부지가 사탕을 나눠주신다. 
하지만 한신이의 형제들은 서로 사이가 좋지않아 서른이 넘어서도 사탕을 공정하게 나누어 주지 않으면 서로 싸움이 난다. 매년 할로윈데이때마다 아부지는 사탕을 자식들에게 최대한 많은 사탕을 나누어 주시기 원하며 
자신에게는 몇개가 남게되는지에 알고 싶어 하신다. 이런 아부지를 도와서 형제간의 싸움을 막아보자.

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

