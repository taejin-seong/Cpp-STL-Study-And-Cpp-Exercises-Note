#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//#define S1
//#define S2
//#define S3 
//#define S4
//#define S5
#define S6
 

#ifdef S1

//remove() 알고리즘 
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
	
	
	vector<int>::iterator iter_end;
	iter_end = remove(v.begin(), v.end(), 30); //v1의 순차열에서 30원소를 논리적으로 제거 
	
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	cout<< "remove 후 [v.begin(), iter_end) 순차열: ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
 
}
#endif /* S1 */ 







#ifdef S2

//remove() 후의 erase() 멤버 함수 사용 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	vector<int>::iterator iter_end;
	iter_end = remove(v.begin(), v.end(), 30); 
	
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	v.erase(iter_end, v.end()); //구간 [iter_end, v.end())의 원소를 실제로 삭제
	 
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;
 
}
#endif /* S2 */ 







#ifdef S3

//remove_if() 알고리즘
bool Pred(int n)
{
	return 30 <= n&&n <= 40;
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
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	vector<int>::iterator iter_end;
	iter_end = remove_if(v.begin(), v.end(), Pred); 
	
	
	cout<< "[v.begin(), iter_end) : ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	
	return 0;
 
}
#endif /* S3 */









#ifdef S4

//remove_copy() 알고리즘 
 int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int> v2(5);

	vector<int>::iterator iter_end; 
	
	
	iter_end = remove_copy(v1.begin(), v1.end(), v2.begin(), 30);


	cout<< "v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	cout<< "v2 : ";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	cout<< "[v2.begin(), iter_end) : ";
	for(vector<int>::iterator iter = v2.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	

	return 0;
 
}
#endif /* S4 */








#ifdef S5

//unique() 알고리즘
 int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);	
	v.push_back(40);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	

	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	vector<int>::iterator iter_end;
	iter_end = unique(v.begin(), v.end()); //구간 [v.begin(), v.end())의 순차열을 인접한 중복 원소가 남지 않게 만듬 
	
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;	
	
	cout<< "[v2.begin(), iter_end) : ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	

	return 0;
 
} 
#endif /* S5 */







#ifdef S6

//조건자 버전 unique() 알고리즘 
bool Pred(int left, int right)
{
	return abs(right - left) < 10;
}
 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(11);
	v.push_back(30);
	v.push_back(32);
	v.push_back(40);
	v.push_back(50);
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	vector<int>::iterator iter_end;
	iter_end = unique(v.begin(), v.end(), Pred); 
	
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;	
	
	cout<< "[v2.begin(), iter_end) : ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	
	return 0;
 
}
#endif /* S6*/
