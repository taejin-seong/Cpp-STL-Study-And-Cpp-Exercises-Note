#include <iostream>
#include <vector>
#include <numeric> //수치 알고리즘 헤더 

using namespace std;



//#define S1
//#define S2
//#define S3
//#define S4
//#define S5
//#define S6
//#define S7
#define S8


 

#ifdef S1

//accumualte() 알고리즘 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	cout<<accumulate(v.begin(), v.end(), 0)<<endl;
	cout<<accumulate(v.begin(), v.end(), 100)<<endl;
	
	return 0; 
}
#endif /* S1 */







#ifdef S2

//함수류 버전 accmulate() 알고리즘
template <typename T>
struct Plus
{
	T operator() (const T& left, const T& right)
	{
		return left + right;
	}
	
}; 

int main()
{
	vector<int> v;
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	//사용자 함수 합 연산 0+1+2+3+4+5
	cout<< accumulate(v.begin(), v.end(), 0, Plus<int>()) <<endl;
	//plus 합 연산 0+1+2+3+4+5
	cout<< accumulate(v.begin(), v.end(), 0, plus<int>()) <<endl;
	//multiplies 곱 연산 1*1*2*3*4*5
	cout<< accumulate(v.begin(), v.end(), 1, multiplies<int>()) <<endl;
	
	return 0; 
}
#endif /* S2 */







#ifdef S3

//inner_product() 알고리즘
int main()
{
	vector<int> v1;
	
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	
	vector<int> v2;

	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	
	//0 + 1*2 + 2*2 + 3*2 + 4*2 + 5*2
	cout<< inner_product(v1.begin(), v1.end(), v2.begin(), 0)<<endl; 
	//100 + 1*2 + 2*2 + 3*2 + 4*2 + 5*2
	cout<< inner_product(v1.begin(), v1.end(), v2.begin(), 100)<<endl;
	
	return 0; 
	
 } 
#endif /* S3 */








#ifdef S4

//함수류 버전 inner_product() 알고리즘
int Plus(int left, int right)
{
	return left +right;
}

int Minus(int left, int right)
{
	return left - right;
}


int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int> v2;

	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	
	//0 + 10-2 + 20-2 + 30-2 + 40-2 + 50-2 사용자 함수 사용 
	cout<< inner_product(v1.begin(), v1.end(), v2.begin(), 0, Plus, Minus)<<endl; 
	//0 + 10-2 + 20-2 + 30-2 + 40-2 + 50-2 STL 함수자 사용 
	cout<< inner_product(v1.begin(), v1.end(), v2.begin(), 0, plus<int>(), minus<int>())<<endl;
	
	return 0; 
	
 } 
#endif /* S4 */








#ifdef S5

//adjacent_difference() 알고리즘
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i <v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	vector<int> v2(5); //size : 5인 vector 생성
	vector<int>::iterator iter_end;
	
	iter_end = adjacent_difference(v1.begin(), v1.end(), v2.begin());
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i <v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	return 0; 

} 
#endif /* S5 */








#ifdef S6

//함수류 버전 adjacent_difference() 알고리즘
int Plus(int left, int right)
{
	return left +right;
}


int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i <v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	vector<int> v2(5); //size : 5인 vector 생성
	vector<int>::iterator iter_end;
	
//	iter_end = adjacent_difference(v1.begin(), v1.end(), v2.begin(), plus<int>());
	iter_end = adjacent_difference(v1.begin(), v1.end(), v2.begin(), Plus);
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i <v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	return 0; 

} 
#endif /* S6 */









#ifdef S7

//partial_sum() 알고리즘
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i <v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	vector<int> v2(5); //size : 5인 vector 생성
	vector<int>::iterator iter_end;
	
	iter_end = partial_sum(v1.begin(), v1.end(), v2.begin());
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i <v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	return 0; 
	
} 
#endif /* S7 */








#ifdef S8

//함수류 버전 partial_sum() 알고리즘
int Multi(int left, int right)
{
	return left * right;
}


int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i <v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	vector<int> v2(5); //size : 5인 vector 생성
	vector<int>::iterator iter_end;

//	iter_end = partial_sum(v1.begin(), v1.end(), v2.begin(), multiplies<int>()); //STL 함수자	
	iter_end = partial_sum(v1.begin(), v1.end(), v2.begin(), Multi);
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i <v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	return 0; 
	
} 
#endif /* S8 */
