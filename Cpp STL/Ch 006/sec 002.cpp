#include <iostream>
#include <deque> 
#include <vector>


using namespace std;


//#define S1
//#define S2
//#define S3
//#define S4
#define S5


#ifdef S1

//push_back ��� �Լ� 
int main()
{
	deque<int> dq;
	
	for (deque<int>::size_type i = 0; i < 10; ++i)
	{
		dq.push_back( (i+1)* 10);
	}
	
	
	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
	{
		cout<< dq[i] <<' ';
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S1 */







#ifdef S2

//vector�� deque
int main()
{
	vector<int> v(4, 100); //100���� �ʱ�ȭ�� 4���� ���Ҹ� ���� �����̳� v
	deque<int> dq(4, 100); //100���� �ʱ�ȭ�� 4���� ���Ҹ� ���� �����̳� dq
	
	v.push_back(200); //v�� 200�߰�
	dq.push_back(200); //dq�� 200�߰� 
	

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
	{
		cout<< dq[i] <<' ';
	}
	cout<<endl;
	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<' ';
	}
	cout<<endl;
	
	return 0; 
}
#endif /* S2 */






#ifdef S3

//deque�� puhs_front()
int main()
{
	deque<int> dq;
	
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);
	
	for(deque<int>::size_type i = 0; i <dq.size(); ++i)
	{
		cout<< dq[i] << " ";
	}
	cout<<endl;
	
	dq.push_front(100); //���ʿ� �߰�
	dq.push_front(200);
	
	for(deque<int>::size_type i = 0; i < dq.size(); ++i)
	{
		cout<< dq[i] << " ";
	}
	cout<<endl;
	
	return 0; 
}
#endif /* S3 */






#ifdef S4

//deque�� �ݺ���
int main()
{
	deque<int> dq;
	
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);
	
	deque<int>::iterator iter;
	for(iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	
	iter = dq.begin()+2; //�ݺ��ڿ� +2 ����
	cout<< *iter <<endl;
	
	iter += 2; //�ݺ��ڿ� +2 ����
	cout<< *iter <<endl;
	
	iter -= 3; //�ݺ��ڿ� -3 ����
	cout<< *iter <<endl;
	
	return 0; 
} 
#endif /* S4 */






#ifdef S5

//deque�� insert() 
int main()
{
	deque<int> dq;
	
	for(int i = 0; i < 10; i++)
	{
		dq.push_back((i+1)*10);		
	}
	
	
	deque<int>::iterator iter;
	deque<int>::iterator iter2;
	
	
	for(iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout<< *iter << ' ';
	}
	cout<<endl;
	
	iter = dq.begin()+2;
	iter2 = dq.insert(iter, 500); //iter2�� ���Ե� ���Ҹ� ����Ű�� �ݺ��� 
	cout<< *iter2 <<endl; //deque�� ���ο� ���Ҹ� ������ �߰��� ����, ���� �� ��, ������ ������ ���� ��(���� or ����)���� �о��. 
	
	for(iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
	
} 
#endif /* S5 */
