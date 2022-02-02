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

//조건자 less<T> 
int main()
{
	less<int> oLess;
	//1. oLess 객체로 10, 20 비교 true, 암묵적 호출
	cout<< oLess(10, 20) <<endl;
	//2. oLess 객체로 10, 20 비교 true, 명시적 호출
	cout<< oLess.operator()(10, 20) <<endl;

	//3. 임시 객체로 10, 20을 비교 true, 암묵적 호출
	cout<< less<int>()(10, 20) <<endl;  
	//3. 임시 객체로 10, 20을 비교 true, 명시적 호출
	cout<< less<int>().operator()(10, 20) <<endl;
	
	return 0;
 
 } 
#endif /* S1 */








#ifdef 	S2

//사용자 Less<T> 
template <typename T>
struct Less : public binary_function<T, T, T> //어댑터 적용이 가능하게 
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

//비교 연산 조건자 
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
	
	
	cout<< "20보다 작은 원소의 개수:  "<< count_if(v.begin(), v.end(), bind2nd<less<int> >(less<int>(), 20)) <<endl;
	
	cout<< "20보다 작거나 같은  원소의 개수:  "<< count_if(v.begin(), v.end(), bind2nd<less_equal<int> >(less_equal<int>(), 20)) <<endl;
	
	cout<< "20보다 큰  원소의 개수:  "<< count_if(v.begin(), v.end(), bind2nd<greater<int> >(greater<int>(), 20)) <<endl;
	
	cout<< "20보다 크거나 같은 원소의 개수:  "<< count_if(v.begin(), v.end(), bind2nd<greater_equal<int> >(greater_equal<int>(), 20)) <<endl;
	
	cout<< "20과 같은 원소의 개수:  "<< count_if(v.begin(), v.end(), bind2nd<equal_to<int> >(equal_to<int>(), 20)) <<endl;
	
	cout<< "20과 다른 원소의 개수:  "<< count_if(v.begin(), v.end(), bind2nd<not_equal_to<int> >(not_equal_to<int>(), 20)) <<endl;
	
	
	return 0;

 } 
#endif /* S3 */
