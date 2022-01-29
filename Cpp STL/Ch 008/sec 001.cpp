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
//#define S8
#define S9



#ifdef S1

//adjacent_find() �˰��� 
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
	
	iter = adjacent_find(v.begin(), v.end()); //���� [v.begin(), v.end())���� ���� ���ҿ� ���� ���Ұ� �������� ù ���� �ݺ��ڸ� ��ȯ 
	
	if(iter != v.end()) //���� ���Ұ� ���ٸ� ������ �� �ݺ��� ��ȯ 
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

//djacent_find() �˰����� ��ȯ �ݺ��� 
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
	
	
	//���� [iter_b , iter_e)�� �������� 10, 20�̹Ƿ� ã�� ���Ұ� ���� iter�� ������ ���� iter_e 
	iter = adjacent_find(iter_b, iter_e);  
	
	cout<< "======================"<<endl;
	if(iter != v.end()) //ã�� ���Ұ� ������ Ȯ�� <<Ʋ�� ǥ��>> 
	{
		cout<< *iter <<endl;
	}
	
	iter_b =v.begin();
	iter_e = v.end();
	iter = adjacent_find(iter_b, iter_e);
	
	if(iter != iter_e) //��� �´��� Ȯ��
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

//adjacent_find() ������ ����
bool Pred(int a, int b) //���� ������ 
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

//count() �˰���
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
	
	int n = count(v.begin(), v.end(), 30); //���� [v.begin(), v.end())���� 30 ������ ������ ��ȯ 
	cout<< "30�� ����: "<< n <<endl;
	
	return 0;
	
} 
#endif /* S4 */






#ifdef S5

//������ ������ count_if()
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
	
	int n = count_if(v.begin(), v.end(), Pred); //���� [v.begin(), v,end()) ���� 25 ���� ū ������ ������ ��ȯ	
	cout<< "25���� ū ������ ����: "<< n << endl;
	
	return 0;
}
#endif /* S5 */






#ifdef S6

//equal() �˰��� 
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
	
	
	if(equal(v1.begin(), v1.end(), v2.begin())) //���� [v1.begin(), v1.end)�� ���� [v2.begin(), v2.begin()+3)�� �� 
	{
		cout<< "�� �������� �����ϴ�. "<<endl;
	}

	return 0;
}
#endif /* S6 */






#ifdef S7

//������ ���� equal() �˰���
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
	
	
	if(equal(v1.begin(), v1.end(), v2.begin(), Pred)) //���� [v1.begin(), v1.end)�� ���� [v2.begin(), v2.begin()+3)�� �� 
	{
		cout<< "�� �������� �����ϴ�. "<<endl;
	}

	return 0;
}
#endif /* S7 */








#ifdef S8

//find() �˰���
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
		cout<< *iter << "�� ã��!"<<endl;
	}
	

	
	iter = find_if(v.begin(), v.end(), Pred); //���� [v.begin(), v.end())���� 35���� ū ������ ������ ��ȯ 

	if(iter != v.end())
	{
		cout<< "���������� 35���� ū ù��° ����: "<< *iter <<endl;
	}
	
	return 0;
}
#endif /* S8 */






#ifdef S9

//find_end() �˰��� �̿��� �����̳� �Ǵ� 
#endif /* S9 */
~308p
