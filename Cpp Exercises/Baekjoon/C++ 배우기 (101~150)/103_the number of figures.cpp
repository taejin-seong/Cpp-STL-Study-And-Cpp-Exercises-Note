/*
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 
계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

https://www.acmicpc.net/problem/2577
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(void)
{
	vector<int> v;
	
	int num;
	int cnt = 0; 
	int res = 1;
	
	// 3개의 숫자를 입력받고 곱한 값을 res에 저장. 
	for (int i = 0; i < 3; i++)
	{
		cin>>num;
		 if ((num < 100) || (num > 1000))
		{
			return 0;
		} 
		
		res *= num;
	}
	
	// 3개의 숫자의 입력범위는 100 ~999 이므로 
	// 곱셈 결과의 최소 값은 100*100*100 = 1,000,000 , 총 7자리
	// 곱셉 결과의 최대 값은 999*999*999 = 997,002,999 , 총 9자리 
	for (int i = 0; i < 9; i++) 
	{	
	// 최대 값 9자리를 기준으로 for문을 돌려서 각각의 자리 숫자를 vector 컨테이너에 저장 
		v.push_back(res % 10);
		res /= 10;
		
	// 최대 값이 9자리가 아닌 그 이하의 자릿 수 (7,8 자릿수)에서는 
	// res = 0이 되는 두번째 타임에는 계속 res / 10은 0의 값이 나오므로
	// vector 컨테이너에 0이 저장됨 따라서. 
	// vector 컨테이너에 저장되는 0을 삭제시킴. 
		if (res == 0)
		{
			cnt += 1;
			
			if (cnt == 2)
			{
				v.pop_back();			
			}
		}
	}
	
	// 곱셈 결과값에 0~9까지 각각 숫자가 몇 번 등장했는지 vector 컨테이너에서 카운트함 
	for (int i = 0; i < 10; i++)
	{
		cout<<count(v.begin(), v.end(), i)<<'\n';
	}
	
	return 0;
}
*/

#include <iostream>
using namespace std;
 
int main(void) {
 
	int count[10] = {};
	int a, b, c;
 
	cin >> a >> b >> c;
 
	int res = a * b * c;
 
 
	// 곱한 값이 0이 될 때 까지 반복
	while(res != 0) {
		count[res % 10]++;	// res에서 나머지 10을 통해 자릿수를 얻어 인덱스로 활용
		res /= 10;			//  매 회 자릿수를 줄이기 위해 10을 나눈다.
	}
 
	// 0 부터 9까지 count 배열을 출력한다. (foreach문 사용)
	for (int v : count) {
		cout << v << "\n";
	}
	return 0;
}
