#include <iostream>
#include <vector>
#include <algorithm> //알고리즘 헤더

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

//copy() 알고리즘
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int>v2(5); //size 5인 vector 생성
	
	vector<int>::iterator iter;
	
	iter = copy(v1.begin(), v1.end(), v2.begin());//구간 [v1.begin(), v1.end())의 모든 원소를 [v2.begin(), iter)의 순차열로 복사 
	cout << "v2 마지막 원소: "<< *(iter-1) << endl; 
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;
	
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	return 0;
}
#endif /* S1 */ 







#ifdef S2

//copy_backward() 알고리즘 
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int> v2(10); //size 10인 vector 생성
	 
	vector<int>::iterator iter;
	
	iter = copy_backward(v1.begin(), v1.end(), v2.end());//구간 [v1.begin(), v1.end())의 모든 원소를 [v2.begin(), iter)의 순차열로 마지막 원소부터 복사 
	cout << "v2 첫 원소: "<< *(iter-1) << endl; 
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;
	
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	return 0;
}
#endif /* S2 */ 







#ifdef S3

//fill(), fill_n() 알고리즘 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	fill(v.begin(), v.end(), 0); //구간 [v.begin(), v.end())의 모든 원소를 0으로 채움
	cout<< "v : ";
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<< endl;
	
	
	fill_n(v.begin(), 3, 55); //구간 [v.begin(), v.begin()+3)의 모든 원소를 55로 채움 
	cout<< "v : ";
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0; 
}
#endif /* S3 */ 






#ifdef S4

//for_each() 알고리즘을 사용한 원소의 수정 
void Func(int& r)
{
	r += 5;
}

int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	for_each(v.begin(), v.end(), Func);
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;
}
#endif /* S4 */








#ifdef S5

//함수자를 사용한 for_each() 알고리즘
class Accumulation
{
	private:
		int total;
	
	public:
		explicit Accumulation(int init = 0) : total(init)
		{ }
		
		void operator()(int& r)
		{
			total += r;
			r = total;
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
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	//[v.begin(), v.end() 모든 원소를 초깃값 0부터 시작해 *p += *(p-1)를 적용 
	for_each(v.begin(), v.end(), Accumulation(0));
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;
 	
} 
#endif /* S5 */ 






#ifdef S6

//generate(), generate_n() 알고리즘 
class Integer
{
	private:
		int data;
	
	public:
		explicit Integer(int d = 0) : data(d)
		{ }
		
		int operator()()
		{
			return data++;
		}
 };
 
 int main()
 {
 	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	generate(v.begin(), v.end(), Integer(1)); //[v.begin(), v.end()의 원소를 1~5로 채움 
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;


	generate(v.begin(), v.end(), Integer(100)); //[v.begin(), v.end()의 원소를 100~104로 채움 
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	generate_n(v.begin(), 3, Integer(1)); //[v.begin(), v.begin()+3)의 원소를 1~3로 채움 
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;

	return 0;
 	
} 
#endif /* S6 */







#ifdef S7

//swap(), iter_swap() 알고리즘
int main()
{
 	int a = 10, b = 20;
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	
	cout<< "a= "<< a << ", "<< "b=" << b <<endl;
	swap(a,b);
	cout<< "a= "<< a << ", "<< "b=" << b <<endl;
	
	vector<int>::iterator p = v.begin();
	vector<int>::iterator q = v.begin()+1;
	
	cout<< "v[0]= "<< v[0] << ", "<< "v[1]=" << v[1] <<endl;
	iter_swap(p,q);
	cout<< "v[0]= "<< v[0] << ", "<< "v[1]=" << v[1] <<endl;
	
	
	return 0;	
} 
#endif /* S7 */







#ifdef S8

//merge() 알고리즘
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int> v2; 
	
	v2.push_back(20);
	v2.push_back(40);
	v2.push_back(70);
	
	vector<int> v3(10); //size 10인 vector 생성
	 
	vector<int>::iterator iter_end;
	
	iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;
	
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	
	cout<< "v3 : ";
	for(vector<int>::size_type i = 0; i < v3.size(); ++i)
	{
		cout<< v3[i] << " ";
	}
	cout<<endl;
	cout<<"v3(합병 순차열): "<<*v3.begin() << '~' << *(iter_end -1) <<endl;


	return 0;
} 
#endif /* S8 */

~p350
