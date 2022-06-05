/*
우리나라 고유의 윷놀이는 네 개의 윷짝을 던져서 배(0)와 등(1)이 나오는 숫자를 세어 도, 개, 걸, 윷, 모를 결정한다. 
네 개 윷짝을 던져서 나온 각 윷짝의 배 혹은 등 정보가 주어질 때 도(배 한 개, 등 세 개), 개(배 두 개, 등 두 개), 걸(배 세 개, 등 한 개), 윷(배 네 개), 모(등 네 개) 중 어떤 것인지를 결정하는 프로그램을 작성하라.

https://www.acmicpc.net/problem/2490
*/

#include <iostream>

using namespace std;

class Yut
{ 
	private:
		int yutNum = 4;
		int yutCountBae = 0;
		int yutState;
	
	public:
		void PlayingYut(void)
		{
			for (int i = 0; i < yutNum; i++)
			{
				cin>>yutState;
				if (yutState == 0)
				{
					yutCountBae += 1;
				}
			}
			
			switch (yutCountBae)
			{
				case 1:
					cout<<'A'<<'\n';
					yutCountBae = 0;
					break;
				
				case 2:
					cout<<'B'<<'\n';
					yutCountBae = 0;
					break;
				
				case 3:
					cout<<'C'<<'\n';
					yutCountBae = 0;
					break;

				case 4:
					cout<<'D'<<'\n';
					yutCountBae = 0;
					break;
					
				default:
					cout<<'E'<<'\n';
					break;
			}
			
		} 	
};

int main(void)
{
	Yut yut;
	for (int i = 0; i < 3; i ++)
	{
		yut.PlayingYut();
	}
	
	return 0;
}
