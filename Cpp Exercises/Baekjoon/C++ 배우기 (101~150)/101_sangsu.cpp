/*
상근이의 동생 상수는 수학을 정말 못한다. 
상수는 숫자를 읽는데 문제가 있다. 
이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다. 
상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.

상수는 수를 다른 사람과 다르게 거꾸로 읽는다.
 예를 들어, 734와 893을 칠판에 적었다면, 상수는 이 수를 437과 398로 읽는다. 
 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

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
