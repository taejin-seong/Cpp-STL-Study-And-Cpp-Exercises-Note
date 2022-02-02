#include <iostream>
#include <algorithm>  
#include <numeric>
#include <vector>

using namespace std;



//#define S1
//#define S2
#define S3


 


#ifdef S1

//일반 함수에 부정자 어댑터 not1을 사용한 count_if() 알고리즘
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
	
	cout<<"30이상 40이하의 원소 개수 : "<< count_if(v.begin(), v.end(), Pred) <<endl;
	
	//다음은 error, not1은 어댑터로 함수 객체에 argument_type, result_type가 정의돼 있어야 함! 
//	cout<<"30이상 40이하가 아닌 원소 개수: "<<count_if(v.begin(), v.end(), not1(Pred)) <<endl;
	
	return 0;
} 
#endif /* S1 */







#ifdef S2

//ptr_fun에 부정자 어댑터 not1을 사용한 count_if() 알고리즘 
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
	
	cout<<"30이상 40이하의 원소 개수 : "<< count_if(v.begin(), v.end(), Pred) <<endl;
	
	//가능 
	cout<<"30이상 40이하가 아닌 원소 개수: "<<count_if(v.begin(), v.end(), not1(ptr_fun(Pred))) <<endl;
	
	return 0;
} 
#endif /* S2 */








#ifdef S3

//사용자 ptr_fun()의 구현
/********************************server********************************/ 
//클래스 : ptr_fun()의 함수 객체 클래스, 일반 함수의 함수 객체 클래스
//여러가지 기능을 제공할 수 잇다. argument_type, result_type 등..

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

//일반 함수를 함수 객체로 변환하는 ptr_fun() 함수
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
	
	cout<<"30이상 40이하의 원소 개수 : "<< count_if(v.begin(), v.end(), Pred) <<endl;
	
	//가능 
	cout<<"30이상 40이하가 아닌 원소 개수: "<<count_if(v.begin(), v.end(), not1(Ptr_fun(Pred))) <<endl;
	
	return 0;
} 
#endif /* S3 */
