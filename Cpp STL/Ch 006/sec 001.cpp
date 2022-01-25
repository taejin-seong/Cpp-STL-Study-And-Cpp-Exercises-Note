#include <iostream>
#include <vector>
#include <typeinfo>


using namespace std;


//#define S1
//#define S2
#define S3
 



#ifdef S1

//vector�� push_back()
int main()
{
	vector<int> v; //int Ÿ���� ���Ҹ� �����ϴ� �����̳� v�� ���� 
	
	v.push_back(10); //v.push_back(x): v�� x�� �߰� 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (int i = 0; i < v.size(); ++i) //v.size(): v�� ������ ���� ��ȯ 
	{
		cout<< v[i] <<endl; //v[i]: v�� i��° ���Ҹ� ���� 
	}
	
	return 0;
	
 } 
#endif /* S1 */







#ifdef S2

//vector�� size_type 
int main()
{
	vector<int> v;  
	
	v.push_back(10);  
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<endl;
	}
	
	cout<< typeid(vector<int>::size_type).name() <<endl;
	
	return 0;
		
 } 
#endif /* S2 */








#ifdef S3

//vector�� size(), capacity(), max_size() 
int main()
{
	vector<int> v;  
	
	v.push_back(10);  
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
	cout<< v.size() <<endl;     //size(): ���� ������ ����  
	cout<< v.capacity() <<endl; //capacity(): ���� �Ҵ�� �޸� ������ ũ�� 
	cout<< v.max_size() <<endl; //max_size(): �����̳ʰ� ���� �� �ִ� �ִ� ������ ����  
	
	return 0;
		
 } 
#endif /* S3 */
