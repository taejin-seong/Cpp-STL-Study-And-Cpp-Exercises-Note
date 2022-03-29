/*
수학자가 구를 깎아서 볼록다면체를 만들었다. 
이 수학자는 임의의 볼록다면체에 대해 (꼭짓점의 수) - (모서리의 수) + (면의 수) = 2가 성립한다는 것을 알고 있다. 
그래서 구를 깎는 게 취미인 이 사람은 꼭짓점, 모서리와 면의 수를 기록할 때 꼭짓점과 모서리의 수만 세고 면의 수는 세지 않는다.

https://www.acmicpc.net/problem/10569
*/

#include <iostream>

using namespace std;

//면의수 = 모서리의 수 - 꼭짓점의 수 + 2
int main(void)
{
	int T, V, E, side;
	
	cin>>T;
	
	if(T < 1 | T > 100) 
	{ 
		return 0;
	}
	
	for (int i = 0; i < T; i++)
	{
		cin>>V>>E;
		if ((V < 4 | V > 100) | (E < 4 | E > 100))
		{
			break;
		}
		side = E - V + 2;
		cout<<side<<'\n';
	}
	
	return 0;
} 
