/*
�츮���� ������ �����̴� �� ���� ��¦�� ������ ��(0)�� ��(1)�� ������ ���ڸ� ���� ��, ��, ��, ��, �� �����Ѵ�. 
�� �� ��¦�� ������ ���� �� ��¦�� �� Ȥ�� �� ������ �־��� �� ��(�� �� ��, �� �� ��), ��(�� �� ��, �� �� ��), ��(�� �� ��, �� �� ��), ��(�� �� ��), ��(�� �� ��) �� � �������� �����ϴ� ���α׷��� �ۼ��϶�.

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
