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
//#define S8
#define S9



#ifdef S1

//adjacent_find() 알고리즘 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter;
	
	iter = adjacent_find(v.begin(), v.end()); //구간 [v.begin(), v.end())에서 현재 원소와 다음 원소가 같아지는 첫 원소 반복자를 반환 
	
	if(iter != v.end()) //같은 원소가 없다면 구간의 끝 반복자 반환 
	{
		cout<< *iter <<endl;
	}
	
	for(; iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0; 	
} 
#endif /* S1 */






#ifdef S2

//djacent_find() 알고리즘의 반환 반복자 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter;
	vector<int>::iterator iter_b = v.begin();
	vector<int>::iterator iter_e = v.begin()+2;
	
	
	//구간 [iter_b , iter_e)의 순차열은 10, 20이므로 찾는 원소가 없어 iter는 구간의 끝인 iter_e 
	iter = adjacent_find(iter_b, iter_e);  
	
	cout<< "======================"<<endl;
	if(iter != v.end()) //찾은 원소가 없는지 확인 <<틀린 표현>> 
	{
		cout<< *iter <<endl;
	}
	
	iter_b =v.begin();
	iter_e = v.end();
	iter = adjacent_find(iter_b, iter_e);
	
	if(iter != iter_e) //모두 맞는지 확인
	{
		cout<< *iter <<endl;
	}
	
	if(iter != v.end())
	{
		cout<< *iter <<endl;
	}
	 
	return 0; 	
} 
#endif /* S2 */ 







#ifdef S3

//adjacent_find() 조건자 버전
bool Pred(int a, int b) //이항 조건자 
{
	return abs(b-a) > 10; 
}

int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(90);
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter;
	iter = adjacent_find(v.begin(), v.end(), Pred);
	
	if(iter != v.end())
	{
		cout<< *iter <<endl;
	}
	
	for(; iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;
	
}
#endif /* S3 */







#ifdef S4

//count() 알고리즘
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(90);
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	int n = count(v.begin(), v.end(), 30); //구간 [v.begin(), v.end())에서 30 원소의 개수를 반환 
	cout<< "30의 개수: "<< n <<endl;
	
	return 0;
	
} 
#endif /* S4 */






#ifdef S5

//조건자 버전의 count_if()
bool Pred(int n)
{
	return 25 < n;
}

int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	int n = count_if(v.begin(), v.end(), Pred); //구간 [v.begin(), v,end()) 에서 25 보다 큰 원소의 개수를 반환	
	cout<< "25보다 큰 원소의 개수: "<< n << endl;
	
	return 0;
}
#endif /* S5 */






#ifdef S6

//equal() 알고리즘 
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	
	vector<int> v2;
	
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i <v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i <v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	
	if(equal(v1.begin(), v1.end(), v2.begin())) //구간 [v1.begin(), v1.end)와 구간 [v2.begin(), v2.begin()+3)을 비교 
	{
		cout<< "두 순차열은 같습니다. "<<endl;
	}

	return 0;
}
#endif /* S6 */






#ifdef S7

//조건자 버전 equal() 알고리즘
bool Pred(int left, int right)
{
	return abs(right - left) < 5;
}
 
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(21);
	v1.push_back(30);
	
	vector<int> v2;
	
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(33);
	
	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i <v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i <v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	
	if(equal(v1.begin(), v1.end(), v2.begin(), Pred)) //구간 [v1.begin(), v1.end)와 구간 [v2.begin(), v2.begin()+3)을 비교 
	{
		cout<< "두 순차열은 같습니다. "<<endl;
	}

	return 0;
}
#endif /* S7 */








#ifdef S8

//find() 알고리즘
bool Pred(int n)
{
	return 35 < n;
}

int main()
{
	
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	

	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	vector<int>::iterator iter; 
	
	
	iter = find(v.begin(), v.end(), 20);
	
	if(iter != v.end())
	{
		cout<< *iter << "을 찾다!"<<endl;
	}
	

	
	iter = find_if(v.begin(), v.end(), Pred); //구간 [v.begin(), v.end())에서 35보다 큰 원소의 개수를 반환 

	if(iter != v.end())
	{
		cout<< "순차열에서 35보다 큰 첫번째 원소: "<< *iter <<endl;
	}
	
	return 0;
}
#endif /* S8 */






#ifdef S9

//find_end() 알고리즘 이용해 컨테이너 판단 
#endif /* S9 */
~308p
