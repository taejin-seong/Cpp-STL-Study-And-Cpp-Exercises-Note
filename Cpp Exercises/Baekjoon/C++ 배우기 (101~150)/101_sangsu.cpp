/*
������� ���� ����� ������ ���� ���Ѵ�. 
����� ���ڸ� �дµ� ������ �ִ�. 
�̷��� ������ ���ϴ� ����� ���ؼ� ����̴� ���� ũ�⸦ ���ϴ� ������ ���־���. 
����̴� �� �ڸ� �� �� ���� ĥ�ǿ� ���־���. �� ������ ũ�Ⱑ ū ���� ���غ���� �ߴ�.

����� ���� �ٸ� ����� �ٸ��� �Ųٷ� �д´�.
 ���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�. 
 ����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.

�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/2908
*/

#include <iostream>

using namespace std;

int main(void)
{
	int A, B;
	int uints_A, ten_A, hundred_A;
	int uints_B, ten_B, hundred_B;
	int reverse_val_A = 0;
	int reverse_val_B = 0;
	
	cin>>A>>B;
	
	uints_A = (A % 10) * 100;
	uints_B = (B % 10) * 100;	
	
	A /= 10;
	B /= 10;
	ten_A = (A % 10) * 10; 
	ten_B = (B % 10) * 10; 

	A /= 10;
	B /= 10;
	hundred_A = A % 10;
	hundred_B = B % 10;

	reverse_val_A = uints_A + ten_A +hundred_A;
	reverse_val_B = uints_B + ten_B +hundred_B;
	
	if ( reverse_val_A > reverse_val_B){
		cout<<reverse_val_A;
	}
	else if (reverse_val_A < reverse_val_B){
		cout<<reverse_val_B;
	}
	else{
		return 0;
	}

	return 0; 
}
