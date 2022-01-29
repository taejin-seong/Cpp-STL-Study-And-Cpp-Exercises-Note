#include <iostream>
#include <vector> //�迭 ��� �����̳� vector�� ���
#include <deque> //�迭 ��� �����̳� deque�� ��� 
#include <algorithm> //�˰��� ��� (find, sort ���) 
#include <list> //��� ��� �����̳� list ��� 
#include <stack> //�����̳� ����� stack �ش�  
#include <functional> // �Լ� ����� ��� (not2 ���) 
#include <set> //��� ��� �����̳� set ��� 


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
//#define S10
//#define S11
//#define S12
#define S13



#ifdef S1

//vector �����̳� 
int main()
{
	vector<int> v; //int Ÿ���� �����ϴ� �����̳� v�� ����
	
	v.push_back(10); //v�� ���� 10�� �߰� 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<endl; //v[i]�� i��° �ε��� ���� ��ȯ 
	}
	
	return 0; 
 } 
#endif /* S1 */





#ifdef S2

//vector�� �ݺ��� 
int main()
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter; //�ݺ��� ����
	 
	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<endl; //�ݺ��ڰ� ����Ű�� ���Ҹ� ������ 
	}
	
	return 0; 
 } 
#endif /* S2 */






#ifdef S3

//vector�� ���� ���� �ݺ��� 
int main()
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin(); //���� ���Ҹ� ����Ű�� �ݺ��� 
	
	cout<< iter[0] <<endl; //iter[i]: iter+i��° ���ҿ� ���� 
	cout<< iter[1] <<endl;
	cout<< iter[2] <<endl;
	cout<< iter[3] <<endl;
	cout<< iter[4] <<endl;
	cout<< endl; 
	
	iter += 2; //iter += n: iter�� n��ŭ �̵�
	cout<< *iter <<endl;
	cout<<endl; 
	
	vector<int>::iterator iter2 = iter+2; //iter2 = iter-n: iter��ġ�� -n�� ��ġ�� �ݺ��ڸ� iter2�� ����
	cout<< *iter2 <<endl; 
	
	return 0; 
 } 
#endif /* S3 */







#ifdef S4

//deque�� ���� ���� �ݺ��� 
int main()
{
	deque<int> dq; 
	
	dq.push_back(10); 
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);
	
	deque<int>::iterator iter = dq.begin();  
	
	cout<< iter[0] <<endl;  
	cout<< iter[1] <<endl;
	cout<< iter[2] <<endl;
	cout<< iter[3] <<endl;
	cout<< iter[4] <<endl;
	cout<< endl; 
	
	iter += 2; 
	cout<< *iter <<endl;
	cout<<endl; 
	
	deque<int>::iterator iter2 = iter+2;
	cout<< *iter2 <<endl; 
	
	return 0; 
 } 
#endif /* S4 */






#ifdef S5

//find �˰���
int main(void)
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter;
	
	iter = find(v.begin(), v.end(), 20); //[begin, end)���� 20 ã��
	cout<< *iter <<endl; 
	
	iter = find(v.begin(), v.end(), 100); //[begin, end)���� 100 ã��
	if (iter == v.end()) //100�� ������ iter==v.end()�� 
	{
		cout<< "100�� ����!" <<endl; 
	}
	
	return 0; 
 } 
#endif /* S5 */






#ifdef S6

//vector�� list �����̳� �ݺ��ڿ� sort �˰���
int main()
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	//sort �˰����� ���� ���� �ݺ��ڸ� �䱸 	
	sort(v.begin(), v.end()); //���� ���� (vector�� ���� ���� �ݺ���)
	sort(lt.begin(), lt.end()); //error! (list�� ����� �ݺ���) 
	
	return 0; 
} 
#endif /* S6 */






#ifdef S7

//�Լ� ��ü�� ������ sort �˰��� 
int main()
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	//�Լ� ��ü: less, greater 	
	//sort(b,e,f): f�� ���� �������� �����Ѵ�. 
	sort(v.begin(), v.end(), less<int>()); //�������� ����
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<endl;
	} 
	cout<<endl;
	
	
	sort(v.begin(), v.end(), greater<int>()); //�������� ����
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<endl;
	} 
	cout<<endl;
		
	return 0; 
} 
#endif /* S7 */






#ifdef S8

//stack �����̳� 
int main()
{
	//stack �����̳� �����: �Ϲ� �����̳ʸ� LIFO ����� stack �����̳ʷ� ��ȯ. 
	stack<int> st; //stack �����̳� ����, ����Ʈ �����̳ʷ� deque<int>�� ��� 
	
	st.push(10); //������ �߰� 
	st.push(20);
	st.push(30);
	
	cout<< st.top() <<endl; //top ������ ���
	st.pop(); //top ������ ����
	
	cout<<st.top()<<endl;
	st.pop(); 
	
	if(st.empty()) //������ ������� Ȯ��
	{
		cout<< "stack�� ������ ����"<<endl;
	}
	
	return 0; 
	 
} 
#endif /* S8 */





#ifdef S9

//������ �ݺ��� reverse_iterator 
int main()
{
	vector<int> v;

	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<< endl;
	
	//�Ϲ� �ݺ��� iterator�� ������ �ݺ��� reverse_iterator�� ��ȯ 
	reverse_iterator<vector<int>::iterator> riter(v.end());
	reverse_iterator<vector<int>::iterator> end_riter(v.begin());
	
	for(; riter != end_riter; ++riter)
	{
		cout<< *riter <<" ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S9 */






#ifdef S10

//vector�� ������ �ݺ���
int main()
{
	vector<int> v;

	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout <<endl;
	
	//STL ��� �����̳ʴ� �ݺ��� ����� reverse_iterator�� typedef Ÿ������ �����ϸ� 
	//rbegin(), rend()�� �����̳��� ������ �ݺ��ڸ� ��ȯ
	vector<int>::reverse_iterator riter(v.rbegin());
	
	for (; riter != v.rend(); ++riter)
	{
		cout<< *riter << " ";
	}
	cout<<endl;
	
	return 0;
	 
 } 
#endif /* S10 */







#ifdef S11

//������ �ݺ��ڿ� ������ �ݺ��ڰ� ����Ű�� �� 
int main()
{
	vector<int> v;

	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator normal_iter = v.begin() + 3; //40 ���Ҹ� ����Ű�� ������ �ݺ��� 
	vector<int>::reverse_iterator reverse_iter(normal_iter); //normal_iter�� ������ �ݺ��� 
	
	cout<< "������ �ݺ����� ��: "<< *normal_iter <<endl;
	cout<< "������ �ݺ����� ��: "<< *reverse_iter <<endl;
	cout<<endl;
	
	for (vector<int>::iterator iter = v.begin(); iter != normal_iter; ++iter)
	{
		cout<< *iter <<" "; //������ ��� 
	}
	cout<<endl;
	
	for (vector<int>::reverse_iterator riter = reverse_iter; riter != v.rend(); ++riter)
	{
		cout<< *riter <<" "; //������ ��� 
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S11 */







#ifdef S12

//less �����ڿ� not2 
int main()
{
	cout<< less<int>()(10, 20) <<endl; //�ӽ� less ��ü�� �� 
	cout<< less<int>()(20, 20) <<endl; 
	cout<< less<int>()(20, 10) <<endl; 
	cout<< "==========" <<endl;
	
	
	cout<< not2(less<int>())(10, 20) <<endl; //�ӽ� ��ü less�� not2 ����� ���� 
	cout<< not2(less<int>())(20, 20) <<endl;
	cout<< not2(less<int>())(20, 10) <<endl;	
	cout<< endl;
	
	
	less<int> l;
	cout<< l(10, 20) <<endl; //less ��ü l�� �� a>=b 1
	cout<< l(20, 20) <<endl; // a=b 0
	cout<< l(20, 10) <<endl; // a<b 0
	cout<< "==========" <<endl;
	
	
	cout<< not2(l)(10, 20) <<endl; //less ��ü l�� not2 ����� ���� a>=b 0
	cout<< not2(l)(20, 20) <<endl; // a=b 1
	cout<< not2(l)(20, 10) <<endl; // a<b 1
	
	
	return 0;
} 
#endif /* S12 */






#ifdef S13

//�����̳� �⺻ �Ҵ�� allocator<T> 
int main()
{
	//vector<class T, class Alloc = allocator<T>>, vector<int>�� ����
	vector<int, allocator<int> > v;
	
	v.push_back(10);
	cout<< *v.begin() <<endl;
	
	
	//set<class T, class Red = less<T>, class Alloc = allocator<T>>, set<int>�� ���� 
	set<int, less<int>, allocator<int> > s;

	s.insert(10);
	cout<< *s.begin() <<endl;
	
	return 0; 
} 
#endif /* S13 */
