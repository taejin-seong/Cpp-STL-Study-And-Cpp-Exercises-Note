/*
�� ���� �ڿ��� A, B, C�� �־��� �� A �� B �� C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� ��� A = 150, B = 266, C = 427 �̶�� A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�, 
����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.

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
	
	// 3���� ���ڸ� �Է¹ް� ���� ���� res�� ����. 
	for (int i = 0; i < 3; i++)
	{
		cin>>num;
		 if ((num < 100) || (num > 1000))
		{
			return 0;
		} 
		
		res *= num;
	}
	
	// 3���� ������ �Է¹����� 100 ~999 �̹Ƿ� 
	// ���� ����� �ּ� ���� 100*100*100 = 1,000,000 , �� 7�ڸ�
	// ���� ����� �ִ� ���� 999*999*999 = 997,002,999 , �� 9�ڸ� 
	for (int i = 0; i < 9; i++) 
	{	
	// �ִ� �� 9�ڸ��� �������� for���� ������ ������ �ڸ� ���ڸ� vector �����̳ʿ� ���� 
		v.push_back(res % 10);
		res /= 10;
		
	// �ִ� ���� 9�ڸ��� �ƴ� �� ������ �ڸ� �� (7,8 �ڸ���)������ 
	// res = 0�� �Ǵ� �ι�° Ÿ�ӿ��� ��� res / 10�� 0�� ���� �����Ƿ�
	// vector �����̳ʿ� 0�� ����� ����. 
	// vector �����̳ʿ� ����Ǵ� 0�� ������Ŵ. 
		if (res == 0)
		{
			cnt += 1;
			
			if (cnt == 2)
			{
				v.pop_back();			
			}
		}
	}
	
	// ���� ������� 0~9���� ���� ���ڰ� �� �� �����ߴ��� vector �����̳ʿ��� ī��Ʈ�� 
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
 
 
	// ���� ���� 0�� �� �� ���� �ݺ�
	while(res != 0) {
		count[res % 10]++;	// res���� ������ 10�� ���� �ڸ����� ��� �ε����� Ȱ��
		res /= 10;			//  �� ȸ �ڸ����� ���̱� ���� 10�� ������.
	}
 
	// 0 ���� 9���� count �迭�� ����Ѵ�. (foreach�� ���)
	for (int v : count) {
		cout << v << "\n";
	}
	return 0;
}
