#include <iostream>
#include <functional>  


using namespace std;



#define S1



 

#ifdef 	S1

//�� ������ logical_and<T> 
template <typename T>
struct Logical_and : public binary_function<T, T, T> //����� ������ �����ϰ� 
{
	T operator()(const T& left, const T& right) const
	{
		return left && right;
	}
};
 
int main()
{
	int n = 30;
	
	logical_and<int> oAnd;

	//1. oAnd ��ü�� 10 < n <50 �ΰ�? true, �Ϲ��� ȣ��
	cout<< oAnd(greater<int>()(n, 10), less<int>()(n, 50)) <<endl;
	//2. oAnd ��ü�� 10 < n <50 �ΰ�? true, ����� ȣ��
	cout<< oAnd.operator()(greater<int>()(n, 10), less<int>()(n, 50)) <<endl;
	
	//3. �ӽð�ü�� 10 < n <50 �ΰ�? true, �Ϲ��� ȣ��(�Ϲ����� ���) 
	cout<< logical_and<bool>()(greater<int>()(n, 10), less<int>()(n, 50))<<endl;
	//4. �ӽð�ü�� 10 < n <50 �ΰ�? true, ����� ȣ�� 
	cout<< logical_and<bool>().operator()(greater<int>()(n, 10), less<int>()(n, 50)) <<endl;
	
	return 0;
	
	//logical_or<T>, logical_not<T>�� ����ϰ� ���� 
 
 } 
#endif /* S1 */
