/*
새 학기를 맞아 상근이는 책을 10권 구입했다. 상근이는 의욕이 너무 앞서서 가격을 조사하지 않고 책을 구입했다. 이제 각 책의 가격을 알아보려고 한다.

하지만, 영수증에는 얼룩이 묻어있었고, 상근이는 책 10권 중 9권의 가격만 읽을 수 있었다.

책 10권의 총 가격과 가격을 읽을 수 있는 9권 가격이 주어졌을 때, 가격을 읽을 수 없는 책의 가격을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/5565
*/

#include <iostream>

using namespace std;

int main(void)
{
	int total_cost;
	int total_nine_book_cost = 0;
	
	cin>>total_cost;
	
	for(int i = 1; i < 10; i++)
	{
		int nine_book_cost;
		cin>>nine_book_cost;
		
		total_nine_book_cost += nine_book_cost;
	}
	
	cout<< total_cost - total_nine_book_cost<<'\n'; 
	
	return 0;
}
