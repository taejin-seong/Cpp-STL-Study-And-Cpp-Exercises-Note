/*
오늘은 갑자기 주사위를 던지고 싶다. 그런데 코딩도 하고 싶다. 그럼 같이할까?

https://www.acmicpc.net/problem/9295
*/

#include <iostream>

using namespace std;


class Dice
{
	private:
		int num1;
		int num2;
		int test_case;
	
	public:
		Dice (int n1 = 0, int n2 = 0, int tc = 0) 
				: num1(n1), num2(n2),test_case(tc)
		{ }
		


		void dice_sum(void)
		{
			cin>>test_case;
			
			for (int i = 1; i <= test_case; i++)
			{
				cin>>num1>>num2;
				cout<<"Case "<<i<<": "<<num1+num2<<'\n';
				
			}
		}
	
};

int main(void)
{
	Dice dice;
	
	dice::dice_sum();
	
	return 0;
}
