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

//push_back 멤버 함수 
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

//vector와 deque
int main()
{
	vector<int> v(4, 100); //100으로 초기화한 4개의 원소를 갖는 컨테이너 v
	deque<int> dq(4, 100); //100으로 초기화한 4개의 원소를 갖는 컨테이너 dq
	
	v.push_back(200); //v에 200추가
	dq.push_back(200); //dq에 200추가 
	

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

//deque의 puhs_front()
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
	
	dq.push_front(100); //앞쪽에 추가
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

//deque의 반복자
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
	
	
	iter = dq.begin()+2; //반복자에 +2 수행
	cout<< *iter <<endl;
	
	iter += 2; //반복자에 +2 수행
	cout<< *iter <<endl;
	
	iter -= 3; //반복자에 -3 수행
	cout<< *iter <<endl;
	
	return 0; 
} 
#endif /* S4 */






#ifdef S5

//deque의 insert() 
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
	iter2 = dq.insert(iter, 500); //iter2는 삽입된 원소를 가리키는 반복자 
	cout<< *iter2 <<endl; //deque는 새로운 원소를 순차열 중간에 삽입, 제거 할 때, 원소의 개수가 작은 쪽(앞쪽 or 뒤쪽)으로 밀어낸다. 
	
	for(iter = dq.begin(); iter != dq.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
	
} 
#endif /* S5 */
