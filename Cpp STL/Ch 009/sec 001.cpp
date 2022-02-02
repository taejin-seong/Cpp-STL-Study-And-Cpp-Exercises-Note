#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> //함수 객체 헤더 

using namespace std;



//#define S1
//#define S2
//#define S3
//#define S4
#define S5

 

#ifdef S1

//세 가지 조건자 
struct LessFunctor //1. 함수 객체 
{
	bool operator()(int left, int right) const
	{
		return left < right;
	} 
};

bool LessFun(int left, int right) //2. 함수 조건자
{
	return left < right;
}

 
int main()
{
	bool (*LessPtr)(int, int) = LessFun; //3. 함수 포인터 조건자
	LessFunctor lessFunctor;
	
	//모두 bool 형식을 반환 
	//1. 함수 객체로 10과 20을 비교 
	cout<< lessFunctor(10, 20)<<endl;
	
	//2. 함수로 10과 20을 비교
	cout<< LessFun(10, 20)<<endl;
	
	//3. 함수 포인터로 10과 20을 비교
	cout<< LessPtr(10, 20)<<endl;
	
	return 0; 
		
}
#endif /* S1 */ 








#ifdef 	S2

//transform() 알고리즘 plus<int> 연산
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
	
	vector<int> v3(3); //size: 3인 vector 생성
	
	//STL 조건자 plus<int> 사용 
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

//어댑터를 사용한 transform() 알고리즘 
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
	
	
	vector<int> v3(3); //size: 3인 vector 생성
	
	//STL 조건자 plus<int> 사용 
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int> > (plus<int>(), 100)); 	

    //사용자 정의 조건자 Plus<int> 사용 
//	transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int> > (Plus<int>(), 100)); 	//error 발생 

	
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

//first_argument_type, second_argument_type, result_type 형식 정의 
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
	
	
	vector<int> v3(3); //size: 3인 vector 생성
	
	//STL 조건자 plus<int> 사용 
//	transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int> > (plus<int>(), 100)); 	

    //사용자 정의 조건자 Plus<int> 사용 
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int> > (Plus<int>(), 100)); //error 발생 안함 

	
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

//기본 클래스 binary_function 상속 
template <typename T>
struct Plus : public binary_function<T, T, T> //이항 함수자 객체가 어댑터 변환이 가능하게 기본 클래스 binary_function을 상속 
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
	
	
	vector<int> v3(3); //size: 3인 vector 생성
	
	//STL 조건자 plus<int> 사용 
//	transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int> > (plus<int>(), 100)); 	

    //사용자 정의 조건자 Plus<int> 사용 
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int> > (Plus<int>(), 100)); //error 발생 안함 

	
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
