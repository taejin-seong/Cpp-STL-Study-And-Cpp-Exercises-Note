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
//make_heap() 알고리즘 
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
	cout<<"v[힙 생성] : ";
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;
}
#endif /* S1 */








#ifdef S2
//push_heap() 알고리즘
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
	cout<<"v[힙 생성]";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	v.push_back(35);
	cout<<"v 순차열에 35 추가 : ";
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	push_heap(v.begin(), v.end());
	cout<<"v[힙 추가] 연산 수행 : ";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	return 0;	
} 
#endif /* S2 */








#ifdef S3
//pop_heap() 알고리즘
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
	cout<<"v[힙 생성] : ";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	pop_heap(v.begin(), v.end()); 
	cout<<"v[힙 삭제] 연산 수행 : ";
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;
	
} 
#endif /* S3 */








#ifdef S4
//sort_heap() 알고리즘
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
	cout<<"v[힙 생성] : ";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	sort_heap(v.begin(), v.end());
	cout<<"v[힙 정렬] : ";
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	return 0;	
} 
#endif /* S4 */








#ifdef S5
//조건자 버전 힙 알고리즘
int main()
{
	vector<int> v;
	
	v.push_back(40);
	v.push_back(10);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);
	v.push_back(60);
	
	//부모 노드가 모든 자식 노드보다 작은 힙을 생성 
	make_heap(v.begin(), v.end(), greater<int>());
	cout<<"v[힙 생성] : ";

	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	v.push_back(35);

	push_heap(v.begin(), v.end(), greater<int>());
	cout<< "v[힙 추가]: ";
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;


	
	sort_heap(v.begin(), v.end(), greater<int>());
	cout<< "v[힙 정렬] : ";
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;

	return 0;		
} 
#endif /* S5 */








#ifdef S6
//nth_element() 알고리즘 
int main()
{
	vector<int> v;
	
	for(int i = 0; i < 100; ++i)
	{
		v.push_back(rand()%100);
	}
	
	
	
	nth_element(v.begin(), v.begin()+20, v.end());
	
	
	cout<<"v[상위 20개] : ";
	for(vector<int>::size_type i = 0; i < 20; ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	cout<< "v[하위 80개] : ";
	for(vector<int>::size_type i = 20; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S6 */









#ifdef S7
//sort() 알고리즘
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
		
		
	cout<<"v[정렬 전] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	sort(v.begin(), v.end());
	cout<< "v[정렬 less] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	
	
	sort(v.begin(), v.end(), Greater);
//	sort(v.begin(), v.end(), greater<int>());
	cout<< "v[정렬 greater] : ";
		for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;

	
	return 0;
} 
#endif /* S7 */








#ifdef S8
//stable_sort() 알고리즘 
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
	
	
	cout<<"v[정렬 전] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	stable_sort(v.begin(), v.end());
	cout<< "v[정렬 less] : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	
	
	stable_sort(v.begin(), v.end(), Greater);
//	sort(v.begin(), v.end(), greater<int>());	
	cout<< "v[정렬 greater] : ";
		for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;

	
	return 0;

}
#endif /* S8 */









#ifdef S9
//partial_sort() 알고리즘
int main()
{
	vector<int> v;
	
	for(int i = 0; i < 100; ++i)
	{
		v.push_back(rand()%100);
	}
	
	partial_sort(v.begin(), v.begin()+20, v.end());
	
	cout<<"v[상위 정렬 20개] :";
	for(vector<int>::size_type i = 0; i < 20; ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	cout<< "v[하위 80개] : ";
	for(vector<int>::size_type i = 20; i < v.size(); ++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
	
	return 0;	

} 
#endif /* S9 */









#ifdef S10
//partial_sort_copy()알고리즘
int main()
{
	vector<int> v1;
	
	for(int i = 0; i < 100; ++i)
	{
		v1.push_back(rand()%100);
	}
	
	cout<< "[v1 정렬 전] : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	
	
	vector<int> v2(20); //size : 20의 vector 생성 
	
	
	
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
