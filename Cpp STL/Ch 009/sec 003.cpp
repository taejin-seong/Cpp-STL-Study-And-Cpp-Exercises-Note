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

//������ less<T> 
int main()
{
	less<int> oLess;
	//1. oLess ��ü�� 10, 20 �� true, �Ϲ��� ȣ��
	cout<< oLess(10, 20) <<endl;
	//2. oLess ��ü�� 10, 20 �� true, ����� ȣ��
	cout<< oLess.operator()(10, 20) <<endl;

	//3. �ӽ� ��ü�� 10, 20�� �� true, �Ϲ��� ȣ��
	cout<< less<int>()(10, 20) <<endl;  
	//3. �ӽ� ��ü�� 10, 20�� �� true, ����� ȣ��
	cout<< less<int>().operator()(10, 20) <<endl;
	
	return 0;
 
 } 
#endif /* S1 */








#ifdef 	S2

//����� Less<T> 
template <typename T>
struct Less : public binary_function<T, T, T> //����� ������ �����ϰ� 
{
	T operator()(const T& left, const T& right) const
	{
		return left < right;
	}
};


int main()
{
	Less<int> oLess;
	cout<< oLess(10, 20) <<endl;
	cout<< oLess.operator()(10, 20) <<endl;
	
	cout<< Less<int>()(10, 20) <<endl;
	cout<< Less<int>().operator()(10, 20) <<endl;
	 
	return 0;

 } 
#endif /* S2 */








#ifdef 	S3

//�� ���� ������ 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);	
	v.push_back(40);
	v.push_back(50);		

	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	cout<< "20���� ���� ������ ����:  "<< count_if(v.begin(), v.end(), bind2nd<less<int> >(less<int>(), 20)) <<endl;
	
	cout<< "20���� �۰ų� ����  ������ ����:  "<< count_if(v.begin(), v.end(), bind2nd<less_equal<int> >(less_equal<int>(), 20)) <<endl;
	
	cout<< "20���� ū  ������ ����:  "<< count_if(v.begin(), v.end(), bind2nd<greater<int> >(greater<int>(), 20)) <<endl;
	
	cout<< "20���� ũ�ų� ���� ������ ����:  "<< count_if(v.begin(), v.end(), bind2nd<greater_equal<int> >(greater_equal<int>(), 20)) <<endl;
	
	cout<< "20�� ���� ������ ����:  "<< count_if(v.begin(), v.end(), bind2nd<equal_to<int> >(equal_to<int>(), 20)) <<endl;
	
	cout<< "20�� �ٸ� ������ ����:  "<< count_if(v.begin(), v.end(), bind2nd<not_equal_to<int> >(not_equal_to<int>(), 20)) <<endl;
	
	
	return 0;

 } 
#endif /* S3 */
