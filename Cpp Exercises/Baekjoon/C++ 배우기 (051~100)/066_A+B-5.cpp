/*
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/10952
*/

/*
#include <iostream>

using namespace std;

int main(void)
{
	int a,b;
	int count = 0;
	int buf[count];
	
	while(1)
	{
		cin>>a>>b;
		
		if ((a == 0) && (b == 0))
		{
			for (int i = 0; i < count-1; i++)
			{
	  			cout<<buf[i]<<'\n';		
			}
			
			break;
		}
		
		buf[count] = a+b;
		count ++;	
	}
	
	return 0;
}
*/



#include <iostream>

using namespace std;

int main(void)
{
	int a,b;
	
	while(1) 
	{
		cin >> a >> b;
 
		if (a == 0 && b == 0) 
		{	
			break;
		}
		cout << a + b << "\n";
	}
 
	return 0;
}


