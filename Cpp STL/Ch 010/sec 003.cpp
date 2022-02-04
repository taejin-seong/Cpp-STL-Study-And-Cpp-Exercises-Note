#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
 
using namespace std;


//#define S1
//#define S2
#define S3




#ifdef S1

//X::iterator와 X::reverse_iterator의 동작 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<< "v[iterator] : ";
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	cout<<"v[reverse_iterator] : ";
	for(vector<int>::reverse_iterator riter = v.rbegin(); riter != v.rend(); ++riter)
	{
		cout<< *riter << " ";
	}
	cout<<endl;
	
	
	return 0; 
} 
#endif /* S1 */








#ifdef S2

//반복자 어댑터  reverse_iterator<T>
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	//reverse_iterator 어댑터로 정방향 반복자를 역방향 반복자로 변환
	reverse_iterator<vector<int>::iterator> rbiter(v.end());
	reverse_iterator<vector<int>::iterator> reiter(v.begin());
	
	cout<< "v [rbiter, reiter] : ";
	
	for(; rbiter != reiter; ++rbiter)
	{
		cout<< *rbiter << " ";
	}
	cout<<endl;
	
	
	cout<< "v [rbegin(), rend()] : ";
	for(vector<int>::const_reverse_iterator riter = v.rbegin(); riter != v.rend(); ++riter)
	{
		cout<< *riter <<" ";
	}
	cout<<endl;
	
	return 0; 
} 
#endif /* S2 */







#ifdef S3

//네 반복자 형식의 변환
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin() + 1;
	vector<int>::const_iterator citer = iter;
//	vector<int>::reverse_iterator riter(iter)과 같음. 
	reverse_iterator<vector<int>::iterator> riter(iter);
//	vector<int>::const_reverse_iterator criter(riter)과 같음. 
	reverse_iterator<vector<int>::const_iterator> criter(iter);
	
	cout<< "iter : "<< *iter <<endl;
	cout<< "citer : "<< *citer <<endl;
	cout<< "riter : "<< *riter <<endl;
	cout<< "criter : "<< *criter <<endl;
	cout<< " ============================" <<endl;
	cout<< "riter.base() => riter : " << *riter.base() <<endl;
	cout<< "criter.base() => citer : " << *criter.base() <<endl;
	 	
	return 0; 
}
 
#endif /* S3 */
