/*
M�� N�� �־��� �� M�̻� N������ �ڿ��� �� ������������ ���� ��� ��� �� ���� ���ϰ� �� �� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�. ���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� ������������ 64, 81, 100 �̷��� �� 3���� �����Ƿ� �� ���� 245�� �ǰ� �� �� �ּڰ��� 64�� �ȴ�.
https://www.acmicpc.net/problem/1977
*/

#include <iostream>
#include <set>


using namespace std;


int main(void)
{
	int M, N;
	int sum = 0;
	int square_num, i = 1;
	
	set<int> s;
	set<int>::iterator min_iter;
	
	cin>>M>>N;
	
	while((square_num = i*i) <= N)  // M <= ? <= N ���� �� ���� i*i�� �������� ã�Ƽ� sum�� ���Ҹ� ���� 
	{
		if (square_num >= M)
		{
			s.insert(square_num); //�⺻ ���� ���� less  
			sum += square_num;
		}

		++i;
	}
		
	if (sum == 0 )
	{
		cout<< -1 << endl;
	}
	
	else
	{
		min_iter = s.begin();
		
		cout << sum << endl;
		cout<< *min_iter << endl;
	}	

	return 0;
}
