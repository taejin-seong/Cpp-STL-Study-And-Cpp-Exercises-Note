#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
 
using namespace std;


//#define S1
//#define S2
#define S3




#ifdef S1

//X::iterator�� X::reverse_iterator�� ���� 
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

//�ݺ��� �����  reverse_iterator<T>
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	//reverse_iterator ����ͷ� ������ �ݺ��ڸ� ������ �ݺ��ڷ� ��ȯ
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

//�� �ݺ��� ������ ��ȯ
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
//	vector<int>::reverse_iterator riter(iter)�� ����. 
	reverse_iterator<vector<int>::iterator> riter(iter);
//	vector<int>::const_reverse_iterator criter(riter)�� ����. 
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
