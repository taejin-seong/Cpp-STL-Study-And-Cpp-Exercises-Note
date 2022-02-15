/*
도현이는 Counter Terror Unit (CTU)에서 일하는 특수요원이다. 도현이는 모든 사건을 정확하게 24시간이 되는 순간 해결하는 것으로 유명하다. 도현이는 1시간 만에 범인을 잡을 수 있어도 잡지 않는다. 정확하게 24시간이 되는 순간이 아니면 잡지 않는 CTU 특수요원이다.

2008년 3월 3일 월요일, CTU는 새학기에 맞춰 핵폭탄을 날리겠다는 테러 정보를 입수했다. CTU에서는 특수요원 도현이에게 이 임무를 맡겼다. CTU의 프로그래머 준규는 이 사건의 배후가 김선영이란 것을 해킹을 통해 밝혀내었다.

도현이는 선영이를 임무를 시작한지 정확하게 24시간이 되는 순간에 잡으려고 한다.

만약 지금 시간이 13:52:30이고, 임무를 시작한 시간이 14:00:00 이라면 도현이에게 남은시간은 00:07:30 이다.

모든 시간은 00:00:00 ~ 23:59:59로 표현할 수 있다. 입력과 출력에 주어지는 모든 시간은 XX:XX:XX 형태이며, 숫자가 2자리가 아닐 경우에는 0으로 채운다.

도현이가 임무를 시작한 시간과, 현재 시간이 주어졌을 때, 도현이에게 남은 시간을 구하는 프로그램을 작성하시오.

https://www.acmicpc.net/problem/1408
*/


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void)
{
	int current_hour, current_minute, current_second;
	int start_hour, start_minute, start_second;
	int remain_hour, remain_minute, remain_second; 
	
	string current_buf;
	string start_buf;
	
	cin>>current_buf;
	cin>>start_buf;


	current_hour = stoi(current_buf.substr(0,2)); 
	current_minute = stoi(current_buf.substr(3,2));
	current_second = stoi(current_buf.substr(6,2));
	
	start_hour = stoi(start_buf.substr(0,2));
	start_minute = stoi(start_buf.substr(3,2));
	start_second = stoi(start_buf.substr(6,2));
	

	remain_second = start_second - current_second; 
	
	if (remain_second < 0) 
	{ 
		remain_second += 60; 
		start_minute--; 
	}

	
	remain_minute = start_minute - current_minute; 
	
	if (remain_minute < 0) 
	{ 
		remain_minute += 60; 
		start_hour--;
	
	} 
	
	remain_hour = start_hour - current_hour; 
	
	if (remain_hour < 0) 
	{ 
		remain_hour += 24; 
	} 

	cout.width(2);
	cout.fill('0');
	cout<<remain_hour<<':';

	cout.width(2);
	cout.fill('0');	
	cout<<remain_minute<<':';

	cout.width(2);
	cout.fill('0');	
	cout<<remain_second<<'\n';	
	
	return 0;
	
}
