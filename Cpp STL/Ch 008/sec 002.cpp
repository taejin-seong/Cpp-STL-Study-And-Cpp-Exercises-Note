#include <iostream>
#include <vector>
#include <algorithm> //�˰��� ���

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

//copy() �˰���
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int>v2(5); //size 5�� vector ����
	
	vector<int>::iterator iter;
	
	iter = copy(v1.begin(), v1.end(), v2.begin());//���� [v1.begin(), v1.end())�� ��� ���Ҹ� [v2.begin(), iter)�� �������� ���� 
	cout << "v2 ������ ����: "<< *(iter-1) << endl; 
	
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

//copy_backward() �˰��� 
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int> v2(10); //size 10�� vector ����
	 
	vector<int>::iterator iter;
	
	iter = copy_backward(v1.begin(), v1.end(), v2.end());//���� [v1.begin(), v1.end())�� ��� ���Ҹ� [v2.begin(), iter)�� �������� ������ ���Һ��� ���� 
	cout << "v2 ù ����: "<< *(iter-1) << endl; 
	
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

//fill(), fill_n() �˰��� 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	fill(v.begin(), v.end(), 0); //���� [v.begin(), v.end())�� ��� ���Ҹ� 0���� ä��
	cout<< "v : ";
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<< endl;
	
	
	fill_n(v.begin(), 3, 55); //���� [v.begin(), v.begin()+3)�� ��� ���Ҹ� 55�� ä�� 
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

//for_each() �˰����� ����� ������ ���� 
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

//�Լ��ڸ� ����� for_each() �˰���
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
	
	//[v.begin(), v.end() ��� ���Ҹ� �ʱ갪 0���� ������ *p += *(p-1)�� ���� 
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

//generate(), generate_n() �˰��� 
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
	
	
	generate(v.begin(), v.end(), Integer(1)); //[v.begin(), v.end()�� ���Ҹ� 1~5�� ä�� 
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;


	generate(v.begin(), v.end(), Integer(100)); //[v.begin(), v.end()�� ���Ҹ� 100~104�� ä�� 
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	generate_n(v.begin(), 3, Integer(1)); //[v.begin(), v.begin()+3)�� ���Ҹ� 1~3�� ä�� 
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

//swap(), iter_swap() �˰���
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

//merge() �˰���
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
	
	vector<int> v3(10); //size 10�� vector ����
	 
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
	cout<<"v3(�պ� ������): "<<*v3.begin() << '~' << *(iter_end -1) <<endl;


	return 0;
} 
#endif /* S8 */

~p350
