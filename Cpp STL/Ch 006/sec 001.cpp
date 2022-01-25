#include <iostream>
#include <vector>
#include <typeinfo>


using namespace std;


//#define S1
//#define S2
#define S3
 



#ifdef S1

//vector의 push_back()
int main()
{
	vector<int> v; //int 타입의 원소를 저장하는 컨테이너 v를 생성 
	
	v.push_back(10); //v.push_back(x): v에 x를 추가 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (int i = 0; i < v.size(); ++i) //v.size(): v의 원소의 개수 반환 
	{
		cout<< v[i] <<endl; //v[i]: v의 i번째 원소를 참조 
	}
	
	return 0;
	
 } 
#endif /* S1 */







#ifdef S2

//vector의 size_type 
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

//vector의 size(), capacity(), max_size() 
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
	
	cout<< v.size() <<endl;     //size(): 저장 원소의 개수  
	cout<< v.capacity() <<endl; //capacity(): 실제 할당된 메모리 공간의 크기 
	cout<< v.max_size() <<endl; //max_size(): 컨테이너가 담을 수 있는 최대 원소의 개수  
	
	return 0;
		
 } 
#endif /* S3 */
