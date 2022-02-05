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
