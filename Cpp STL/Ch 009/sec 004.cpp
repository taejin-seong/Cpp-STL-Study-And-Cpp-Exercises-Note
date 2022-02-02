#include <iostream>
#include <functional>  


using namespace std;



#define S1



 

#ifdef 	S1

//논리 조건자 logical_and<T> 
template <typename T>
struct Logical_and : public binary_function<T, T, T> //어댑터 적용이 가능하게 
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

	//1. oAnd 객체로 10 < n <50 인가? true, 암묵적 호출
	cout<< oAnd(greater<int>()(n, 10), less<int>()(n, 50)) <<endl;
	//2. oAnd 객체로 10 < n <50 인가? true, 명시적 호출
	cout<< oAnd.operator()(greater<int>()(n, 10), less<int>()(n, 50)) <<endl;
	
	//3. 임시객체로 10 < n <50 인가? true, 암묵적 호출(일반적인 사용) 
	cout<< logical_and<bool>()(greater<int>()(n, 10), less<int>()(n, 50))<<endl;
	//4. 임시객체로 10 < n <50 인가? true, 명시적 호출 
	cout<< logical_and<bool>().operator()(greater<int>()(n, 10), less<int>()(n, 50)) <<endl;
	
	return 0;
	
	//logical_or<T>, logical_not<T>도 비슷하게 동작 
 
 } 
#endif /* S1 */
