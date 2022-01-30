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
//#define S9
//#define S10
//#define S11
//#define S12
//#define S13
//#define S14
//#define S15
//#define S16
//#define S17
//#define S18
//#define S19
//#define S20
//#define S21
//#define S22
//#define S23
#define S24

 

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
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(70);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int> v2;
	
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);
	
	vector<int>::iterator iter;
	
	iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());
	
	if(iter != v1.end())
	{
		cout<< "iter : "<< *iter <<endl; //��ġ�ϴ� ������ �������� ù ������ �ݺ��� iter 
		cout<< "iter-1 : "<< *(iter-1) <<endl;
		cout<< "iter+1 : "<< *(iter+1) <<endl;
	}
	
	return 0;
}
#endif /* S9 */







#ifdef S10

//find_end() �˰��� ������ ����
bool Pred(int left, int right)
{
	return left <= right;
}

int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(15);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(12);
	v1.push_back(80);
	
	vector<int> v2;
	
	v2.push_back(10);
	v2.push_back(15);
	v2.push_back(25);
	
	vector<int>::iterator iter;
	
	iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);
	
	if(iter != v1.end())
	{
		cout<< "iter : "<< *iter <<endl; //��ġ�ϴ� ������ �������� ù ������ �ݺ��� iter 
		cout<< "iter-1 : "<< *(iter-1) <<endl;
		cout<< "iter+1 : "<< *(iter+1) <<endl;
	}
	
	return 0;	
} 
#endif /* S10 */






#ifdef S11

//find_first_of() �˰���
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	
	vector<int> v2;
	
	v2.push_back(40);
	v2.push_back(80);
	v2.push_back(20);
	
	cout<<"v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	cout<<"v2 : ";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter;
	
	iter = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end());
	
	if(iter != v1.end())
	{
		cout<< "iter : " << *iter <<endl;
	}
	
	return 0;
} 
#endif /* S11 */






#ifdef S12

//find_first_of() �˰���
bool Pred(int left, int right)
{
	return left > right;
}

int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	
	vector<int> v2;
	
	v2.push_back(40);
	v2.push_back(80);
	v2.push_back(20);
	
	cout<<"v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	cout<<"v2 : ";
	for(vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter;
	
	iter = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);
	
	if(iter != v1.end())
	{
		cout<< "iter : " << *iter <<endl;
	}
	
	return 0;
}  
#endif /* S12 */







#ifdef S13

//ofr_each() �˰��� 
void Print(int n)
{
	cout<< n << " ";
}

int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for_each(v.begin(), v.begin()+2, Print);
	cout<<endl;
	
	for_each(v.begin(), v.begin()+4, Print);
	cout<<endl;
	
	for_each(v.begin(), v.end(), Print); //[v.begin(), v.end()) ������ ���� ��� 
	cout<<endl;
	
	return 0;
}  
#endif /* S13 */







#ifdef S14

//ofr_each() �˰���� �Լ��� 
class PrintFunctor
{
	private:
		char fmt;
	
	public:
		explicit PrintFunctor(char c = ' ') : fmt(c) 
		{ }
		
		void operator() (int n) const
		{
			cout<< n << fmt;
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

	for_each(v.begin(), v.end(), PrintFunctor()); //���� ������ ' '�� 
	cout<<endl;
	
	for_each(v.begin(), v.end(), PrintFunctor(',')); //���� ������ ','�� 
	cout<<endl;
	
	for_each(v.begin(), v.end(), PrintFunctor('\n')); //���� ������ '\n'��  
	cout<<endl;
	
	return 0;
}  
#endif /* S14 */







#ifdef S15

//lexicographical_compare() �˰���
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	
	
	vector<int> v2;
	
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(50);
	
	
	vector<int> v3;
	
	v3.push_back(10);
	v3.push_back(20);
	v3.push_back(30);
	
	
	if(lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end()))
	{
		cout<< "v1 < v2" << endl;
	}
	
	else
	{
		cout<< "v1 >= v2" <<endl;
	}
	
	if(lexicographical_compare(v1.begin(), v1.end(), v3.begin(), v3.end()))
	{
		cout<< "v1 < v3" <<endl;
	}
	
	else
	{
		cout<< "v1 >= v3" <<endl;
	}
	
	return 0;
	
} 
#endif /* S15 */







#ifdef S16

//������ ������ lexicographical_compare() �˰���
template <typename T>
struct Less
{
	bool operator() (const T& left, const T& right) const
	{
		return left < right;
	}
};


int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	
	
	vector<int> v2;
	
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(50);

	
	if(lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), less<int>()))
	{
		cout<< "���� less v1�� v2�� ��: true" <<endl;
	}
	
	else
	{
		cout<< "���� less v1�� v2�� ��: false" <<endl;
	}
	
	if(lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>()))
	{
		cout<< "���� greater v1�� v2�� ��: true" <<endl;
	}
	
	else
	{
		cout<< "���� greater v1�� v2�� ��: false" <<endl;
	}
	

	if(lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), Less<int>()))
	{
		cout<< "����� ���� Less v1�� v2�� ��: true" <<endl;
	}
	
	else
	{
		cout<< "����� ���� Less v1�� v2�� ��: false" <<endl;
	}
	
	
	return 0;
	
} 
#endif /* S16 */







#ifdef S17

//max(), min() �˰���
class Point
{
	private:
		int x, y;
	
	public:
		explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) 
		{ }
		
		int GetX() const
		{
			return x;
		}
		
		int GetY() const
		{
			return y;
		}
		
		void Print() const
		{
			cout<< '(' << x <<','<<y<<')'<<endl;
		}
};


bool XCompare(const Point& left, const Point& right)
{
	return left.GetX() < right.GetX();
	
}

bool YCompare(const Point& left, const Point& right)
{
	return left.GetY() < right.GetY();
	
}

int main()
{
	int  a = 10, b = 20;
	int r; 
	
	r = max(a,b);
	cout<< "max: "<< r <<endl;
	
	r = min(a,b);
	cout<< "min: "<< r <<endl;
	
	
	Point pt1(5, 8), pt2(3, 9);
	Point pt3;
	
	pt3 = max(pt1, pt2, XCompare);
	cout<< "x max: ";
	pt3.Print();
	
	pt3 = max(pt1, pt2, YCompare);
	cout<< "y max: ";
	pt3.Print();
	
	return 0;
}
#endif /* S17 */







#ifdef S18

//max_element(), min_element() �˰���
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter;
	
	iter = max_element(v.begin(), v.end());
	cout<< *iter << endl;
	
	iter = min_element(v.begin(), v.end());
	cout<< *iter <<endl;
	
	return 0;
}
#endif /* S18 */







#ifdef S19

//������ ���� max()_element() �˰���
class Point
{
	private:
		int x, y;
	
	public:
		explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) 
		{ }
		
		int GetX() const
		{
			return x;
		}
		
		int GetY() const
		{
			return y;
		}
		
		void Print() const
		{
			cout<< '(' << x <<','<<y<<')'<<endl;
		}
};


bool Compare (const Point& left, const Point& right)
{
	if(left.GetX() < right.GetX())
	{
		return true;
	}
	
	else if(left.GetX() > right.GetX())
	{
		return false;
	}
	
	else
	{
		return left.GetY() < right.GetY();
	}
	
}

int main()
{
	vector<Point> v;
	
	v.push_back(Point(3, 2));
	v.push_back(Point(2, 5));
	v.push_back(Point(1, 5));
	v.push_back(Point(3, 3));
	v.push_back(Point(3, 2));
	
	vector<Point>::iterator iter;
	
	iter = max_element(v.begin(), v.end(), Compare);
	
	cout<< "max: ";
	iter->Print(); //�ݺ��ڰ� ����Ű�� ��ü�� ����� -> �����ڷ� ���� 
	cout<< "max: ";
	(*iter).Print(); //���� ����
	
	return 0; 
	
}
#endif /* S19 */







#ifdef S20

//mismatch() �˰��� 
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
	v2.push_back(30);
	v2.push_back(80);	
	v2.push_back(90);
	
	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
	
	iter_pair = mismatch(v1.begin(), v1.end(), v2.begin()); //���� �ٸ� ���Ұ� �߰ߵǴ� ù ������ �ݺ��� ���� ��ȯ 
	
	cout<< "v1: "<< *iter_pair.first << ", " <<"v2: "<< *iter_pair.second <<endl;	

	return 0; 
	
}
#endif /* S20 */






#ifdef S21

//������ ������ mismatch() �˰���
bool Pred(int left, int right)
{
	return abs(right-left) <= 5;
}

 
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	
	vector<int> v2;
	
	v2.push_back(11);
	v2.push_back(25);
	v2.push_back(33);
	v2.push_back(46);	
	v2.push_back(50);
	
	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
	
	iter_pair = mismatch(v1.begin(), v1.end(), v2.begin(), Pred);
	
	cout<< "v1: "<< *iter_pair.first << ", " <<"v2: "<< *iter_pair.second <<endl;	

	return 0; 
	
}
#endif /* S21 */








#ifdef S22

//search() �˰��� 
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(70);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	
	vector<int> v2;
	
	v2.push_back(30);
	v2.push_back(40);
	v2.push_back(50);
	
	
	vector<int>::iterator iter;
	
	iter = search(v1.begin(), v1.end(), v2.begin(), v2.end());
	
	if(iter != v1.end())
	{
		cout<< "iter : "  <<*iter     <<endl; //��ġ�ϴ� ù ��° �������� ù ������ �ݺ��� iter 
		cout<< "iter-1 : "<<*(iter-1) <<endl;
		cout<< "iter+1 : "<<*(iter+1) <<endl;
	}
	
	return 0;
}
#endif /* S22 */








#ifdef S23

//search_n() �˰��� 
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
	
	vector<int>::iterator iter;
	
	iter = search_n(v.begin(), v.end(), 3, 30);
	
	if(iter != v.end())
	{
		cout<< "iter : "  <<*iter     <<endl; 
		cout<< "iter-1 : "<<*(iter-1) <<endl;
		cout<< "iter+1 : "<<*(iter+1) <<endl;
	}
	
	return 0;
}
#endif /* S23 */







#ifdef S24

//������ ���� search_n() �˰��� 
bool Pred(int left, int right)
{
	return abs(right - left) <= 5;
}

 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(32);
	v.push_back(28);	
	v.push_back(33);	
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter;
	
	iter = search_n(v.begin(), v.end(), 3, 30, Pred);
	
	if(iter != v.end())
	{
		cout<< "iter : "  <<*iter     <<endl; 
		cout<< "iter-1 : "<<*(iter-1) <<endl;
		cout<< "iter+1 : "<<*(iter+1) <<endl;
	}
	
	return 0;
}
#endif /* S24 */
