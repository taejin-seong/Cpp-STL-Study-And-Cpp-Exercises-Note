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
	
		map<int, string, greater<int> >  m; //key �ߺ� �ȵ� 	
		

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
������ ������ ���� ���Ѵٸ� ���� �� ���� ���Ի��̴�.
�̰��� ���ó� ���� ���׿��� ���� ���� �����̰�, �븣������ �������� ���� �̷��� ������ ������ ��ǥ�� ���ô�. �׵��� ���� ��ī���͵��� ���� ������ �İ��� ���ɼ� �ִ� ��Ű�� ã�´�.
���� ÿ�ô� �����̾� ���׿��� ��Ű� �ְ�, �ᱹ ���ο� ������ ���� �����ߴ�. 
������ �׵��� ��ī���͸� ��ٸ��� ���ư�, �ξ� �� ȿ������ ������ �����س´�. "
���� ���� �ȸ��� �ִٸ�, �װͿ��� �մ��� ������ �ִ�"�� ����� ����� �ٷ� �װ��̴�.
�౸���� �� ���� �� ���� ��� ������ ���� ���� ������� �̾߱Ⱑ �ȴ�. 
�̿� ���� ���ο� ������ ã�� ����� �ܼ��� ���ܵ鿡�� ��ȭ�� �ɾ� �׵��� ���� ��� ������ ��°� �Ǿ���. ����� �ӹ��� ÿ�ð� ����Ʈ���� ���� ��� ������ ã�Ƴ� �� �ֵ��� ���� ���̴�.

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
