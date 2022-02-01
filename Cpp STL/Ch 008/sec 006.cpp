#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



//#define S1
//#define S2
//#define S3
//#define S4
//#define S5
//#define S6
//#define S7
//#define S8
//#define S9
//#define S10
#define S11

 

#ifdef S1

//binary_search() 알고리즘
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	if(binary_search(v.begin(), v.end(), 20))
	{
		cout<< "20 원소가 존재 합니다." <<endl;
	}
	
	else
	{
		cout<< "20 원소가 존재하지 않습니다." <<endl;
	}
	
	return 0;
		
} 
#endif /* S1 */






#ifdef S2

//조건자 버전 binary_search() 알고리즘
bool Pred(int left, int right)
{
	return 3 < right - left;
}


int main()
{
	vector<int> v;
	
	v.push_back(40);
	v.push_back(46);
	v.push_back(12);
	v.push_back(80);
	v.push_back(10);
	v.push_back(47);
	v.push_back(30);
	v.push_back(55);
	v.push_back(90);
	v.push_back(53);
	
	cout<< "[v 원본] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	

	sort(v.begin(), v.end(), Pred);
	
	cout<< "[v 정렬] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	if(binary_search(v.begin(), v.end(), 32, Pred))
	{
		cout<< "32 원소가 존재합니다. "<<endl;
	}
	
	else
	{
		cout<< "32 원소가 존재하지 않습니다. "<<endl;
	}
	
	if(binary_search(v.begin(), v.end(), 35, Pred))
	{
		cout<< "35 원소가 존재합니다. "<<endl;	
	}
	 
	else
	{
		cout<< "35 원소가 존재하지 않습니다. "<<endl;
	}
	
	return 0;

} 
#endif /* S2 */








#ifdef S3

//binary_search() 알고리즘의 조건자 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(20);
	
	
	cout<< "[v 원본] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	

	sort(v.begin(), v.end()); //기본 정렬 기준 less 사용 
	
	cout<< "[v: less 정렬] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	//비교 조건자 less 지정 (일반 버전 binary_search() 가능) 
	cout<<"비교 less 찾기: "<<binary_search(v.begin(), v.end(), 20, less<int>()) <<endl;
	
	
		
	sort(v.begin(), v.end(), greater<int>()); //정렬 기준 greater 지정 
	
	cout<< "[v: greater 정렬] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	//조건자 정렬 기준 greater 정렬 
	cout<<"비교 greater 찾기: "<<binary_search(v.begin(), v.end(), 20, greater<int>()) <<endl;
	

	return 0;	
} 
#endif /* S3 */






#ifdef S4

//includes() 알고리즘
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	
	vector<int> v2;
	
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(40);
	
	
	vector<int> v3;
	v3.push_back(10);
	v3.push_back(20);
	v3.push_back(60);
	
	
	if(includes(v1.begin(), v1.end(), v2.begin(), v2.end()))
	{
		cout<< "v2는 v1의 부분 집합"<<endl;
	}
	else
	{
		cout<< "v2는 v1의 부분 집합 아님"<<endl;		
	}
	
	
	if(includes(v1.begin(), v1.end(), v3.begin(), v3.end()))
	{
		cout<< "v3는 v1의 부분 집합"<<endl;
	}
	else
	{
		cout<< "v3는 v1의 부분 집합 아님"<<endl;		
	}
	
	//정렬 기준을 greater<int> 설정 
	sort(v1.begin(), v1.end(), greater<int>());
	sort(v2.begin(), v2.end(), greater<int>());
	
	if(includes(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>()))
	{
		cout<<"greater정렬 순차열: v2는 v1의 부분 집합"<<endl;
	} 
	 
	 return 0;

} 
#endif /* S4 */






#ifdef S6

//lower_bound(), upper_bound() 알고리즘 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter_lower, iter_upper; 
	
	iter_lower = lower_bound(v.begin(), v.end(), 30);
	iter_upper = upper_bound(v.begin(), v.end(), 30);
	
	cout<<"30 원소의 순차열 [iter_lower, iter_upper] : ";
	for(vector<int>::iterator iter = iter_lower; iter != iter_upper; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;

} 
#endif /* S6 */








#ifdef S7

//equal_range() 알고리즘 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);	
	
//	vector<int>::iterator iter_lower, iter_upper;
	pair<vector<int>::iterator, vector<int>::iterator> iter_pair; 
	
	iter_pair = equal_range(v.begin(), v.end(), 30);
	
	cout<< "30 원소의 순차열 [iter_pair.first, iter_pair.second] : ";
	for(vector<int>::iterator iter = iter_pair.first; iter != iter_pair.second; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
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
	v2.push_back(30);
	v2.push_back(60);
	
	vector<int> v3(10); //size: 10인  vector 생성 
	
	cout<<"v1 :";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	cout<<"v2 :";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
		
	cout<<"v3 :";
	for(vector<int>::size_type i = 0; i < v3.size(); ++i)
	{
		cout<< v3[i] << " ";
	}
	cout<<endl;	
	
	
	vector<int>::iterator iter_end;
	//v1의 순차열과 v2의 순차열을 합병하여 [v3.begin(), iter_end)의 순차열에 저장 
	iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	
	
	cout<<"v1 : ";
	for(vector<int>::size_type i = 0; i <v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;	
	
	
	cout<<"v2 : ";
	for(vector<int>::size_type i = 0; i <v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;	


	cout<<"v3 : ";
	for(vector<int>::size_type i = 0; i < v3.size(); ++i)
	{
		cout<< v3[i] << " ";
	}
	cout<<endl;	
	
	
	return 0;
	 
} 
#endif /* S8 */







#ifdef S9

//inplace_merge() 알고리즘 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	v.push_back(20);
	v.push_back(30);
	v.push_back(60);
	
	cout<< "v의 두 구간으로 정렬된 하나의 순차열" <<endl;
	cout<< "[v.begin(), v.begin()+5) + [v.beign()+5, v.end())" << endl; 

	cout<<"v : ";	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	//두 구간으로 정렬된 하나의 순차열을 한 구간으로 정렬 
	inplace_merge(v.begin(), v.begin()+5, v.end());
	
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;

	return 0;	
} 
#endif /* S9 */







#ifdef S10

//set_union() 알고리즘 
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
	v2.push_back(30);
	v2.push_back(60);
	
	vector<int> v3(10); //size: 10인  vector 생성 
	vector<int>::iterator iter_end;
	
	
	iter_end = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	
	
	cout<<"[v3.begin(), iter_end) : ";	
	for(vector<int>::iterator iter =v3.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;

	
	cout<<"v3 :";
	for(vector<int>::size_type i = 0; i < v3.size(); ++i)
	{
		cout<< v3[i] << " ";
	}
	cout<<endl;	
	
	return 0;
	
} 
#endif /* S10 */








#ifdef S11

//set_intersection(), set_difference(), set_symmetric_difference() 알고리즘 
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
	v2.push_back(30);
	v2.push_back(60);
	
	
	vector<int> v3(10); //size: 10인  vector 생성 
	vector<int>::iterator iter_end;
	
	
	iter_end = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	
	cout<<"교집합 [v3.begin(), iter_end) : ";	
	for(vector<int>::iterator iter =v3.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	
	
	
	iter_end = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	
	cout<<"차집합 [v3.begin(), iter_end) : ";	
	for(vector<int>::iterator iter =v3.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;




	iter_end = set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	
	cout<<"대칭 차집합 [v3.begin(), iter_end) : ";	
	for(vector<int>::iterator iter =v3.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;
	
} 
#endif /* S11 */
