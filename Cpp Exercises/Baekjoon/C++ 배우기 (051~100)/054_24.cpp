/*
�����̴� Counter Terror Unit (CTU)���� ���ϴ� Ư������̴�. �����̴� ��� ����� ��Ȯ�ϰ� 24�ð��� �Ǵ� ���� �ذ��ϴ� ������ �����ϴ�. �����̴� 1�ð� ���� ������ ���� �� �־ ���� �ʴ´�. ��Ȯ�ϰ� 24�ð��� �Ǵ� ������ �ƴϸ� ���� �ʴ� CTU Ư������̴�.

2008�� 3�� 3�� ������, CTU�� ���б⿡ ���� ����ź�� �����ڴٴ� �׷� ������ �Լ��ߴ�. CTU������ Ư����� �����̿��� �� �ӹ��� �ð��. CTU�� ���α׷��� �رԴ� �� ����� ���İ� �輱���̶� ���� ��ŷ�� ���� ����������.

�����̴� �����̸� �ӹ��� �������� ��Ȯ�ϰ� 24�ð��� �Ǵ� ������ �������� �Ѵ�.

���� ���� �ð��� 13:52:30�̰�, �ӹ��� ������ �ð��� 14:00:00 �̶�� �����̿��� �����ð��� 00:07:30 �̴�.

��� �ð��� 00:00:00 ~ 23:59:59�� ǥ���� �� �ִ�. �Է°� ��¿� �־����� ��� �ð��� XX:XX:XX �����̸�, ���ڰ� 2�ڸ��� �ƴ� ��쿡�� 0���� ä���.

�����̰� �ӹ��� ������ �ð���, ���� �ð��� �־����� ��, �����̿��� ���� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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
