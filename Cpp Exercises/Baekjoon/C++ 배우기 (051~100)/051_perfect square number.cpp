/*
M과 N이 주어질 때 M이상 N이하의 자연수 중 완전제곱수인 것을 모두 골라 그 합을 구하고 그 중 최솟값을 찾는 프로그램을 작성하시오. 예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 완전제곱수는 64, 81, 100 이렇게 총 3개가 있으므로 그 합은 245가 되고 이 중 최솟값은 64가 된다.
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
	
	while((square_num = i*i) <= N)  // M <= ? <= N 범위 안 에서 i*i로 제곱수를 찾아서 sum과 원소를 저장 
	{
		if (square_num >= M)
		{
			s.insert(square_num); //기본 정렬 기준 less  
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
