#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> //�Լ� ��ü ��� 

using namespace std;



//#define S1
//#define S2
//#define S3
//#define S4
#define S5

 

#ifdef S1

//�� ���� ������ 
struct LessFunctor //1. �Լ� ��ü 
{
	bool operator()(int left, int right) const
	{
		return left < right;
	} 
};

bool LessFun(int left, int right) //2. �Լ� ������
{
	return left < right;
}

 
int main()
{
	bool (*LessPtr)(int, int) = LessFun; //3. �Լ� ������ ������
	LessFunctor lessFunctor;
	
	//��� bool ������ ��ȯ 
	//1. �Լ� ��ü�� 10�� 20�� �� 
	cout<< lessFunctor(10, 20)<<endl;
	
	//2. �Լ��� 10�� 20�� ��
	cout<< LessFun(10, 20)<<endl;
	
	//3. �Լ� �����ͷ� 10�� 20�� ��
	cout<< LessPtr(10, 20)<<endl;
	
	return 0; 
		
}
#endif /* S1 */ 








#ifdef 	S2

//transform() �˰��� plus<int> ����
template <typename T>
struct Plus
{
	T operator()(const T& left, const T& right) const
	{
		return left + right;
	}
};


int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);	
	
	vector<int> v2;
	
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	
	vector<int> v3(3); //size: 3�� vector ����
	
	//STL ������ plus<int> ��� 
//	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>()); 	
	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus<int>()); 
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;

	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i < v2.size(); i++)
	{
		cout<< v2[i] <<" ";
	}
	cout<<endl;


	cout<< "v3 : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}
	
	 return 0;

 } 
#endif /* S2 */









#ifdef 	S3

//����͸� ����� transform() �˰��� 
template <typename T>
struct Plus
{
	T operator()(const T& left, const T& right) const
	{
		return left + right;
	}
};


int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);	
	
	
	vector<int> v3(3); //size: 3�� vector ����
	
	//STL ������ plus<int> ��� 
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int> > (plus<int>(), 100)); 	

    //����� ���� ������ Plus<int> ��� 
//	transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int> > (Plus<int>(), 100)); 	//error �߻� 

	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;
	
	cout<< "v3 : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}

	return 0;

 } 
#endif /* S3*/








#ifdef 	S4

//first_argument_type, second_argument_type, result_type ���� ���� 
template <typename T>
struct Plus
{
	typedef T first_argument_type;
	typedef T second_argument_type;
	typedef T result_type;
	
	T operator()(const T& left, const T& right) const
	{
		return left + right;
	} 

};


int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);	
	
	
	vector<int> v3(3); //size: 3�� vector ����
	
	//STL ������ plus<int> ��� 
//	transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int> > (plus<int>(), 100)); 	

    //����� ���� ������ Plus<int> ��� 
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int> > (Plus<int>(), 100)); //error �߻� ���� 

	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;
	
	cout<< "v3 : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}

	return 0;

 } 
#endif /* S4 */








#ifdef 	S5

//�⺻ Ŭ���� binary_function ��� 
template <typename T>
struct Plus : public binary_function<T, T, T> //���� �Լ��� ��ü�� ����� ��ȯ�� �����ϰ� �⺻ Ŭ���� binary_function�� ��� 
{
	
	T operator()(const T& left, const T& right) const
	{
		return left + right;
	} 

};


int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);	
	
	
	vector<int> v3(3); //size: 3�� vector ����
	
	//STL ������ plus<int> ��� 
//	transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int> > (plus<int>(), 100)); 	

    //����� ���� ������ Plus<int> ��� 
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int> > (Plus<int>(), 100)); //error �߻� ���� 

	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;
	
	cout<< "v3 : ";
	for(vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout<< v3[i] <<" ";
	}

	return 0;

 } 
#endif /* S5 */
