/*
선영이의 집에는 콘센트를 꽂을 수 있는 플러그가 하나밖에 없다. 선영이는 많은 컴퓨터를 가지고 있는데, 컴퓨터의 전원 문제는 어떻게 해결하는 것일까?
하나의 플러그가 있고, N개의 멀티탭이 있다. 각 멀티탭은 몇 개의 플러그로 이루어져 있다고 한다. 최대 몇 대의 컴퓨터를 전원에 연결할 수 있을까?

https://www.acmicpc.net/problem/2010
*/

#include <iostream>

using namespace std;

int main(void)
{
	int plug, multi_tap;
	int total_computer = 0;
	cin>>multi_tap;
	
	for (int i = 0; i < multi_tap; i++)
	{
		cin>>plug;
		
		total_computer += plug;
	}
	
	total_computer -= (multi_tap - 1); //결국 마지막 멀티탭은 다른 하나의 멀티탭 플러그에  꼿아짐으로 -1 
	
	cout<<total_computer;
	
	return 0;
} 
