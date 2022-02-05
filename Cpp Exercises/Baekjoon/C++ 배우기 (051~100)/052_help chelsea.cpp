/*
#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	int n, p, c;
	char str[20];
		

	cin>> n;
	if(n > 100 ) {return 0;}
	
	for(int i = 0; i < n; ++i)
	{	
		cin>> p;
		if(1 > p || p > 100 ) {return 0;}
	
		map<int, string, greater<int> >  m; //key 중복 안됨 	
		

		for(int j = 0; j < p; ++j)
		{
			cin>>c>>str;
			m[c] = str;
		}
		
		map<int, string, greater<int> >::iterator iter = m.begin();	
		cout<< m[iter->first]<<endl;
	}	
	
	return 0;
}
*/

/*
구단이 성적을 내지 못한다면 답은 새 선수 영입뿐이다.
이것은 오늘날 유럽 리그에서 가장 흔한 전략이고, 노르웨이의 로젠버그 팀은 이러한 전략이 성공한 대표적 예시다. 그들은 많은 스카우터들을 지구 곳곳에 파견해 가능성 있는 루키를 찾는다.
현재 첼시는 프리미어 리그에서 헤매고 있고, 결국 새로운 선수를 사기로 결정했다. 
하지만 그들은 스카우터를 기다리기 지쳤고, 훨씬 더 효율적인 전략을 개발해냈다. "
만약 무언가 팔리고 있다면, 그것에는 합당한 이유가 있다"는 배룸의 명언이 바로 그것이다.
축구에서 이 말은 곧 가장 비싼 선수가 가장 좋은 선수라는 이야기가 된다. 
이에 따라 새로운 선수를 찾는 방법은 단순히 구단들에게 전화를 걸어 그들의 가장 비싼 선수를 사는게 되었다. 당신의 임무는 첼시가 리스트에서 가장 비싼 선수를 찾아낼 수 있도록 돕는 것이다.

https://www.acmicpc.net/problem/11098
*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int n, p;
	cin >> n;
	while (n--)
	{
		cin >> p;
		vector <pair<int, string> > s(p);
		int ans = 0, i = 0, ex = 0;
		while (p--)
		{
			cin >> s[i].first >> s[i].second;
			if (s[i].first > ex)
			{
				ex = s[i].first;
				ans = i;
			}
			i++;
		}
		cout << s[ans].second << '\n';
	}
}
