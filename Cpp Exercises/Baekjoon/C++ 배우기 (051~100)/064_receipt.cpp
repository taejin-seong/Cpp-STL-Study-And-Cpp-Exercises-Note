/*
�� �б⸦ �¾� ����̴� å�� 10�� �����ߴ�. ����̴� �ǿ��� �ʹ� �ռ��� ������ �������� �ʰ� å�� �����ߴ�. ���� �� å�� ������ �˾ƺ����� �Ѵ�.

������, ���������� ����� �����־���, ����̴� å 10�� �� 9���� ���ݸ� ���� �� �־���.

å 10���� �� ���ݰ� ������ ���� �� �ִ� 9�� ������ �־����� ��, ������ ���� �� ���� å�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
