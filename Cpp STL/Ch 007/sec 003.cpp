#include <iostream>
#include <map> 
#include <string> 

using namespace std;


//#define S1
//#define S2
//#define S3
//#define S4
//#define S5
#define S6

 


#ifdef S1

//map�� insert() 
int main()
{
	//map<key type, value type> m;
	map<int, int> m; //key, value ��� �������� �����̳� ����
	                 //�⺻ ���� ���� less
	
	//m.insert(pair<key type, value type> (key, value));
	m.insert(pair<int, int>(5, 100)); //�ӽ� pair ��ü ���� �� ���� 
	m.insert(pair<int, int>(3, 100));
	m.insert(pair<int, int>(8, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 70));
	m.insert(pair<int, int>(7, 100));
	 
	pair<int, int> pr(9,50);
	m.insert(pr); //pr ��ü ���� �� ���� 
	
	map<int, int>::iterator iter;
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<<"("<< (*iter).first << "," << (*iter).second <<")"<<" "; //first (key), second (value)
	}
	cout<<endl;
	
	//�ݺ��ڴ� -> �����ڰ� ������ �����ε��Ǿ� �����Ƿ� ������ó�� ����� -> �����ڷ� ������ �� �ִ�. 
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<<"("<< iter->first << "," << iter->second <<")"<<" ";
	}
	cout<<endl;
	
	return 0;
}
#endif /* S1 */






#ifdef S2

//map�� insert() ��ȯ ��	
int main()
{
	map<int, int> m;
	pair<map<int, int>::iterator, bool> pr; //insert() ��� pair ��ü
	
	m.insert(pair<int, int>(5,100));
	m.insert(pair<int, int>(3,100));
	m.insert(pair<int, int>(8,30));
	m.insert(pair<int, int>(4,40));
	m.insert(pair<int, int>(1,70));
	m.insert(pair<int, int>(7,100));
	
	pr = m.insert(pair<int, int>(9, 50)); //����
	
	if(true == pr.second)
	{
		cout<< "key: "<< pr.first->first << ", value: " << pr.first->second <<" ���� �Ϸ�!"<<endl; 
	}
	
	else
	{
		cout<< "key 9�� �̹� m�� �ս��ϴ�."<<endl;
	}
	
	pr = m.insert(pair<int, int>(9,50)); //���� 
		
	if(true == pr.second)
	{
		cout<< "key: "<< pr.first->first << ", value: " << pr.first->second <<" ���� �Ϸ�!"<<endl; 
	}
	
	else
	{
		cout<< "key 9�� �̹� m�� �ս��ϴ�."<<endl;
	}
	 
	return 0; 
} 
#endif /* S2 */ 






#ifdef S3

//map�� [] ������
int main()
{
	map<int, int> m;
	
	m[5] = 100; //key 5, value 100�� ���Ҹ� m�� �����Ѵ�.
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;
	
	map<int, int>::iterator iter;
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;
	
	m[5] = 200; //key 5�� value�� 200���� �����Ѵ�.
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	
	return 0;

 } 
#endif /* S3 */ 






#ifdef S4

//map �����̳��� ���� ���� ������ greater
int main()
{
	map<int, string, greater<int> > m; //greater ���� ������ key:int, value:string Ÿ���� �����̳� m ���� 
		
	m[5] = "five"; //���� �߰� 
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";
	m[9] = "nine";
	
	map<int, string, greater<int> >::iterator iter;
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" <<" ";
	}
	cout<<endl;
	
	cout<< m[9] <<" "; //key�� ���ε� value�� ���
	cout<< m[8] <<" ";
	cout<< m[7] <<" ";
	cout<< m[5] <<" ";
	cout<< m[4] <<" ";
	cout<< m[3] <<" ";
	cout<< m[1] <<" ";
	
	return 0;
} 
#endif /* S4 */







#ifdef S5

//map�� ã�� ���� ��� �Լ�
int main()
{
	map<int, int> m;
	
	m[5] = 100; 
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;
	
	map<int, int>::iterator iter;
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;	
	
	
		
	iter = m.find(5);
	
	if(iter != m.end())
	{
		cout<< "key 5�� ���ε� value: "<<iter->second <<endl;
	}
	
	
	
	map<int,int>::iterator lower_iter;
	map<int,int>::iterator upper_iter;
	lower_iter = m.lower_bound(5);
	upper_iter = m.upper_bound(5);
	
	cout<< "���� [lower_iter, upper_iter)�� ������";
	for(iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;
	
	
		
	pair<map<int, int>::iterator, map<int,int>::iterator> iter_pair;
	iter_pair = m.equal_range(5);
	
	cout<< "���� [lower_pair.first, upper_pair.first)�� ������";
	for(iter = iter_pair.first; iter != iter_pair.second; ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S5 */
