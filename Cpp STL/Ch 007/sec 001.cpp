#include <iostream>
#include <set>
#include <typeinfo>
 

using namespace std;


//#define S1
//#define S2 
//#define S3
//#define S4
//#define S5
//#define S6
//#define S7
//#define S8
//#define S9
#define S10
 
 


#ifdef S1

//set�� insert()
int main()
{
	set<int> s; //���� ���Ҹ� �����ϴ� �⺻ ���� ������ less�� �� �����̳� ����
	
	s.insert(50); //�������� ����(key)�� ����  * s.insert(k): k�� s�� ���� 
	s.insert(30);
	s.insert(80);
	s.insert(40); 
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter; //�⺻ ���� ������ less�� set�� ����� �ݺ���
	
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter <<" "; //inorder ���� Ʈ�� Ž�� ������ ��� 
	}
	cout<<endl;
	
	s.insert(50); //�ߺ��� ����(key)�� �����Ѵ�. ���� (������ �ߺ��� ���x) 
	s.insert(50);
	
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter <<" "; //����� ���� 
	}
	cout<<endl;
	
	return 0;
 } 
#endif /* S1 */ 






#ifdef S2

//insert()�� ��ȯ��(pair ��ü)
int main()
{
	set<int> s;
	
	pair<set<int>::iterator, bool> pr; 
	
	pr = s.insert(50); //50 ������ ù ��° ���� *50�� s�� �����ϰ� ����� pr ��ü�� ���� 
	s.insert(40);
	s.insert(80);
	
	if(true == pr.second) // pr.second�� ���� ����(true), ����(false)�� ��Ÿ���� bool �� 
	{
		cout<< *pr.first <<" ���� ����!" <<endl; //pr.first�� 50 ���Ҹ� ����Ű�� �ݺ���
	}
	
	else
	{
		cout<< *pr.first <<" �� �̹� �ֽ��ϴ�. ���� ����!" << endl;
	}
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	
	pr = s.insert(50); //50 ������ �� ���� ����. ����
	
	
	if(true == pr.second)
	{
		cout<< *pr.first << " ���� ����!"<<endl;
	}
	
	else
	{
		cout<< *pr.first <<" �� �̹� �ֽ��ϴ�. ���� ����!" << endl;
	}
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
 
} 
#endif /* S2 */






#ifdef S3

//set�� Ž�� ��ġ ���� insert()
int main()
{
	set<int> s;
	
	pair<set<int>::iterator, bool> pr;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	pr = s.insert(90); //pr.first�� 90 ������ �ݺ���
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	s.insert(pr.first, 85); //90 ������ �ݺ��ڿ��� �˻� ���� �� ����
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	 
	return 0;
} 
#endif /* S3 */







#ifdef S4

//���� ���� greater�� ����� set
int main()
{
	set<int, greater<int> >  s; //���� �������� greater<int> �����ڸ� ���
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int, greater<int> >::iterator iter; //greator<int> �����ڸ� ����ϴ� �ݺ��� ����
 	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0; 
} 
#endif /* S4 */






#ifdef S5

//set�� key_comp(), vlaue_comp() ��� �Լ�
int main()
{
	set<int, less<int> > s_less;  //set<int> s�� ����
	set<int, greater<int> > s_greater; //���� �������� greater<int> �����ڸ� ���
	
	s_less.insert(50);
	s_less.insert(80);
	s_less.insert(40);
	
	s_greater.insert(50);
	s_greater.insert(80);
	s_greater.insert(40);
	
	set<int, less<int> >::key_compare l_cmp = s_less.key_comp();
	cout<< l_cmp(10, 20) <<endl; //10 < 20 ����, bool ���� ��ȯ 
	
	set<int, greater<int> >::key_compare g_cmp = s_greater.key_comp();
	cout<< g_cmp(10, 20) <<endl; //10 > 20 ����, bool ���� ��ȯ 
	
	cout<< "key_compare type: "<< typeid(s_less.key_comp()).name() <<endl; 
	cout<< "key_compare type: "<< typeid(s_greater.key_comp()).name() <<endl;
	 
	cout<< "value_compare type: "<< typeid(s_less.key_comp()).name() <<endl; 
	cout<< "value_compare type: "<< typeid(s_greater.key_comp()).name() <<endl; 
	
	return 0;
 } 
#endif /* S5 */







#ifdef S6

//set�� count()
int main()
{
	set<int> s;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter;
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	cout<< "���� 50�� ����: "<<s.count(50) <<endl; // ����(key)�� ��ġ�ϴ� ������ ��ȯ 
	cout<< "���� 100�� ����: "<<s.count(100)<<endl;
	
	return 0;
} 
#endif /* S6 */






#ifdef S7

//set�� find()
int main()
{
	set<int> s;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter <<endl;
	}
	
	
	iter = s.find(30); //30�� �ݺ��ڸ� ��ȯ
	
	
	if(iter != s.end()) // ���� ã�� ���Ұ� ������ �� ǥ�� �ݺ��ڸ� ��ȯ 
	{
		cout<< *iter <<"�� s�� �ִ�!"<<endl;
	}
	
	else
	{
		cout<< "30�� s�� ����."<<endl;
	}
	
	return 0; 
	
} 
#endif /* S7 */






#ifdef S8

//set�� ���� ������ ����� �� �� 
int main()
{
	set<int, less<int> > s; //���� ���� less
	
	cout<< !(s.key_comp()(30, 50) && !s.key_comp()(50, 30)) <<endl; //30�� 50�� ��, �ٸ��� 
	
	cout<< (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) <<endl; //30�� 30�� ��, ���� 
	
	return 0; 
}
#endif /* S8 */	






#ifdef S9

//set�� lower_bound(), upper_bound()
int main()
{
	set<int> s;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	
	set<int>::iterator iter_lower; //ã�� ������ ���� �ݺ��� 
	set<int>::iterator iter_upper; //ã�� ������ ���� ���Ҹ� ����Ű�� �ݺ��� 
	
	iter_lower = s.lower_bound(30);
	iter_upper = s.upper_bound(30);
	cout<< *iter_lower <<endl;
	cout<< *iter_upper <<endl;
	
	iter_lower = s.lower_bound(55);
	iter_upper = s.upper_bound(55);
	
	if(iter_lower != iter_upper) //[iter_lower, iter_upper)���� �� �ݺ��ڰ� ���ٸ� ã�� ���Ҵ� ���� 
	{
		cout<< "55�� s�� ����!" <<endl;

	}
	
	else
	{
		cout<< "55�� s�� ����!"<<endl;
	}
	
	return 0;  
} 
#endif /* S9 */ 







#ifdef S10

//set�� equal_range()
int main()
{
	set<int> s;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	pair<set<int>::iterator, set<int>::iterator> iter_pair; //�ݺ��� ���� pair ��ü	
	
	iter_pair = s.equal_range(30);
	cout<< *iter_pair.first <<endl;
	cout<< *iter_pair.second <<endl;
	
	
	iter_pair = s.equal_range(55);
	
	if(iter_pair.first != iter_pair.second)
	{
		cout<< "55�� s�� ����!"<<endl;
	}
	else
	{
		cout<< "55�� s�� ����!"<<endl;
	}
	
	return 0;
} 
#endif /* S10 */ 
