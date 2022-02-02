#include <iostream>
#include <functional> 
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;



//#define S1
//#define S2
#define S3


 


#ifdef 	S1

//plus<T>�� ��� 
int main()
{
	plus<int> oPlus;
	//1. oPlus ��ü�� 10, 20 ���ϱ�, �Ϲ��� ȣ��
	cout<< oPlus(10, 20) <<endl;
	//2. oPlus ��ü�� 10, 20 ���ϱ�, ����� ȣ��
	cout<< oPlus.operator()(10, 20) <<endl;

	//3. �ӽ� ��ü�� 10, 20 ���ϱ�, �Ϲ��� ȣ��
	cout<< plus<int>()(10, 20) <<endl;  
	//3. �ӽ� ��ü�� 10, 20 ���ϱ�, ����� ȣ��
	cout<< plus<int>().operator()(10, 20) <<endl;
	
	return 0;
 
 } 
#endif /* S1 */








#ifdef 	S2

//����� Plus<T> 
template <typename T>
struct Plus : public binary_function<T, T, T> //����� ������ �����ϰ� 
{
	T operator()(const T& left, const T& right) const
	{
		return left + right;
	}
};


int main()
{
	Plus<int> oPlus;
	cout<< oPlus(10, 20) <<endl;
	cout<< oPlus.operator()(10, 20) <<endl;
	
	cout<< Plus<int>()(10, 20) <<endl;
	cout<< Plus<int>().operator()(10, 20) <<endl;
	 
	return 0;

 } 
#endif /* S2 */








#ifdef 	S3

//��� ���� �Լ��ڿ� �˰��� 
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);	
	v1.push_back(40);
	v1.push_back(50);		
	
	vector<int> v2;
	
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);
	
	vector<int> v3(5); //size: 5�� vector ����
	
	
	
	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>()); 	

	cout<< "v3(v1+v2) : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}
	cout<<endl;
	
	
	
	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), multiplies<int>()); 	

	cout<< "v3(v1*v2) : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}
	cout<<endl;
	
	
	
	
	transform(v1.begin(), v1.end(), v3.begin(), negate<int>()); 	

	cout<< "v3(-v1) : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}
	cout<<endl;
	
	
	
	
	adjacent_difference(v1.begin(), v1.end(), v3.begin(), minus<int>()); 	

	cout<< "v3(v1 ���� ���ҿ��� ��) : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}
	cout<<endl;
	
	
	
	
	partial_sum(v1.begin(), v1.end(), v3.begin(), multiplies<int>());

	cout<< "v3(v1 ������ �� ����) : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}
	cout<<endl;
	
	
	
	cout<< "v1 ��� ������ ��: "<< accumulate(v1.begin(), v1.end(), 1, multiplies<int>()) <<endl;
	
	
	return 0;

 } 
#endif /* S3 */
