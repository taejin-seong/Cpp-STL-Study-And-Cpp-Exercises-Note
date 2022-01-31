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
#define S10

 

#ifdef S1
//make_heap() �˰��� 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	make_heap(v.begin(), v.end());
	cout<<"v[�� ����] : ";
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;
}
#endif /* S1 */








#ifdef S2
//push_heap() �˰���
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	
	make_heap(v.begin(), v.end());
	cout<<"v[�� ����]";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	v.push_back(35);
	cout<<"v �������� 35 �߰� : ";
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	push_heap(v.begin(), v.end());
	cout<<"v[�� �߰�] ���� ���� : ";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	return 0;	
} 
#endif /* S2 */








#ifdef S3
//pop_heap() �˰���
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	
	make_heap(v.begin(), v.end());
	cout<<"v[�� ����] : ";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	pop_heap(v.begin(), v.end()); 
	cout<<"v[�� ����] ���� ���� : ";
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;
	
} 
#endif /* S3 */








#ifdef S4
//sort_heap() �˰���
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	
	make_heap(v.begin(), v.end());
	cout<<"v[�� ����] : ";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	sort_heap(v.begin(), v.end());
	cout<<"v[�� ����] : ";
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;	
} 
#endif /* S4 */








#ifdef S5
//������ ���� �� �˰���
int main()
{
	vector<int> v;
	
	v.push_back(40);
	v.push_back(10);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);
	v.push_back(60);
	
	//�θ� ��尡 ��� �ڽ� ��庸�� ���� ���� ���� 
	make_heap(v.begin(), v.end(), greater<int>());
	cout<<"v[�� ����] : ";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	v.push_back(35);

	push_heap(v.begin(), v.end(), greater<int>());
	cout<< "v[�� �߰�]: ";
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;


	
	sort_heap(v.begin(), v.end(), greater<int>());
	cout<< "v[�� ����] : ";
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;

	return 0;		
} 
#endif /* S5 */








#ifdef S6
//nth_element() �˰��� 
int main()
{
	vector<int> v;
	
	for(int i = 0; i < 100; ++i)
	{
		v.push_back(rand()%100);
	}
	
	
	
	nth_element(v.begin(), v.begin()+20, v.end());
	
	
	cout<<"v[���� 20��] : ";
	for(vector<int>::size_type i = 0; i < 20; ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	cout<< "v[���� 80��] : ";
	for(vector<int>::size_type i = 20; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S6 */









#ifdef S7
//sort() �˰���
bool Greater(int left, int right)
{
	return left > right;
}

int main()
{
	vector<int> v;
	
	for(int  i = 0; i < 100; ++i)
	{
		v.push_back(rand()%100);
	}
		
		
	cout<<"v[���� ��] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	sort(v.begin(), v.end());
	cout<< "v[���� less] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	
	
	sort(v.begin(), v.end(), Greater);
//	sort(v.begin(), v.end(), greater<int>());
	cout<< "v[���� greater] : ";
		for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;

	
	return 0;
} 
#endif /* S7 */








#ifdef S8
//stable_sort() �˰��� 
bool Greater(int left, int right)
{
	return left > right;
}

int main()
{
	vector<int> v;
	
	v.push_back(30);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(10);
	v.push_back(40);	
	
	
	cout<<"v[���� ��] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	stable_sort(v.begin(), v.end());
	cout<< "v[���� less] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	
	
	stable_sort(v.begin(), v.end(), Greater);
//	sort(v.begin(), v.end(), greater<int>());	
	cout<< "v[���� greater] : ";
		for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;

	
	return 0;

}
#endif /* S8 */









#ifdef S9
//partial_sort() �˰���
int main()
{
	vector<int> v;
	
	for(int i = 0; i < 100; ++i)
	{
		v.push_back(rand()%100);
	}
	
	partial_sort(v.begin(), v.begin()+20, v.end());
	
	cout<<"v[���� ���� 20��] :";
	for(vector<int>::size_type i = 0; i < 20; ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	cout<< "v[���� 80��] : ";
	for(vector<int>::size_type i = 20; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	
	return 0;	

} 
#endif /* S9 */









#ifdef S10
//partial_sort_copy()�˰���
int main()
{
	vector<int> v1;
	
	for(int i = 0; i < 100; ++i)
	{
		v1.push_back(rand()%100);
	}
	
	cout<< "[v1 ���� ��] : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	
	
	vector<int> v2(20); //size : 20�� vector ���� 
	
	
	
	partial_sort_copy(v1.begin(), v1.begin()+20, v2.begin(), v2.end());

	cout<< "[v2 less] : ";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	
	
	partial_sort_copy(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>());
	
	cout<< "[v2 greater] : ";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<<v2[i]<< " ";
	}
	cout<<endl;
	
	
	return 0;	
} 
#endif /* S10 */
