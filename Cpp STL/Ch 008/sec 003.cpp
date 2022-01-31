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

//remove() �˰��� 
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
	iter_end = remove(v.begin(), v.end(), 30); //v1�� ���������� 30���Ҹ� �������� ���� 
	
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	cout<< "remove �� [v.begin(), iter_end) ������: ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
 
}
#endif /* S1 */ 







#ifdef S2

//remove() ���� erase() ��� �Լ� ��� 
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
	
	
	v.erase(iter_end, v.end()); //���� [iter_end, v.end())�� ���Ҹ� ������ ����
	 
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

//remove_if() �˰���
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

//remove_copy() �˰��� 
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

//unique() �˰���
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
	iter_end = unique(v.begin(), v.end()); //���� [v.begin(), v.end())�� �������� ������ �ߺ� ���Ұ� ���� �ʰ� ���� 
	
	
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

//������ ���� unique() �˰��� 
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
