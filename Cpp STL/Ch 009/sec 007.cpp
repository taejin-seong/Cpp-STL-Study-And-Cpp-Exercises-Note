#include <iostream>
#include <algorithm>  
#include <numeric>
#include <vector>

using namespace std;



//#define S1
//#define S2
#define S3


 


#ifdef S1

//�Ϲ� �Լ��� ������ ����� not1�� ����� count_if() �˰���
bool Pred(int n)
{
	return 30 <= n && n <= 40;
}

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
	
	cout<<"30�̻� 40������ ���� ���� : "<< count_if(v.begin(), v.end(), Pred) <<endl;
	
	//������ error, not1�� ����ͷ� �Լ� ��ü�� argument_type, result_type�� ���ǵ� �־�� ��! 
//	cout<<"30�̻� 40���ϰ� �ƴ� ���� ����: "<<count_if(v.begin(), v.end(), not1(Pred)) <<endl;
	
	return 0;
} 
#endif /* S1 */







#ifdef S2

//ptr_fun�� ������ ����� not1�� ����� count_if() �˰��� 
bool Pred(int n)
{
	return 30 <= n && n <= 40;
}

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
	
	cout<<"30�̻� 40������ ���� ���� : "<< count_if(v.begin(), v.end(), Pred) <<endl;
	
	//���� 
	cout<<"30�̻� 40���ϰ� �ƴ� ���� ����: "<<count_if(v.begin(), v.end(), not1(ptr_fun(Pred))) <<endl;
	
	return 0;
} 
#endif /* S2 */








#ifdef S3

//����� ptr_fun()�� ����
/********************************server********************************/ 
//Ŭ���� : ptr_fun()�� �Լ� ��ü Ŭ����, �Ϲ� �Լ��� �Լ� ��ü Ŭ����
//�������� ����� ������ �� �մ�. argument_type, result_type ��..

template <typename RType, typename AType> 
class Ptr_fun_class : public unary_function <AType, RType>
{
	RType (*pf)(AType);
	
	public:
		Ptr_fun_class(RType (*_pf)(AType)) :pf(_pf)
		{ }
		
		RType operator()(AType n )const
		{
			return pf(n);
		}
};

//�Ϲ� �Լ��� �Լ� ��ü�� ��ȯ�ϴ� ptr_fun() �Լ�
template <typename RType, typename AType> 
Ptr_fun_class<RType, AType> Ptr_fun(RType (*pf)(AType))
{
	return Ptr_fun_class<RType, AType>(pf);
}

/********************************client********************************/ 
bool Pred(int n)
{
	return 30 <= n && n <= 40;
}

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
	
	cout<<"30�̻� 40������ ���� ���� : "<< count_if(v.begin(), v.end(), Pred) <<endl;
	
	//���� 
	cout<<"30�̻� 40���ϰ� �ƴ� ���� ����: "<<count_if(v.begin(), v.end(), not1(Ptr_fun(Pred))) <<endl;
	
	return 0;
} 
#endif /* S3 */
