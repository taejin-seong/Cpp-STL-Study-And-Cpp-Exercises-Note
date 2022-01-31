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
#define S9
 

#ifdef S1

//next_permulation() �˰���
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end()) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end()) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end()) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end()) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end()) <<endl;
	//������ �����̹Ƿ� next_permutation()�� false ��ȯ 
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end()) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	 
	 return 0;
	
} 
#endif /* S1 */







#ifdef S2

//������ ���� next_permutation() �˰��� 
class Point
{
	private:
		int x,y;
	
	public:
		explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) 
		{ }
		
		int GetX() const
		{
			return x;
		}
		
		int GetY() const
		{
			return y;
		}
};


ostream& operator<<(ostream& out, const Point& arg)
{
	out<< "(" <<arg.GetX() << "," <<arg.GetY() << ")"; //Point ��ü cout ����� ���� ������ �����ε� 
	
	return out;
}



bool Pred(const Point& left, const Point& right)
{
	return left.GetY() < right.GetY(); //������ �� �������� ���� ���� ������ 
}


int main()
{
	vector<Point> v;
	
	v.push_back(Point(5, 1));
	v.push_back(Point(7, 2));
	v.push_back(Point(5, 3));
	
	
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end(), Pred) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end(), Pred) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end(), Pred) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end(), Pred) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end(), Pred) <<endl;
	//Point�� y�� �������� ������ �����̹Ƿ� next_permutation()�� false ��ȯ 
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end(), Pred) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	 
	return 0;
	
} 
#endif /* S2 */








#ifdef S3

//partition() �˰��� 
bool Pred(int n)
{
	return n < 40;
}


int main()
{
	vector<int> v;
	
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	v.push_back(60);
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter_sep;
	iter_sep = partition(v.begin(), v.end(), Pred); //40 ���Ҹ� �������� �̸��� �̻��� �з� 
	
	cout<<"40�̸��� ������: ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_sep; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;

	cout<<"40�̻��� ������: ";
	for(vector<int>::iterator iter = iter_sep; iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S3 */








#ifdef S4

//stable_partition() �˰��� 
bool Pred(int n)
{
	return n < 40;
}


int main()
{
	vector<int> v;
	
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	v.push_back(60);
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter_sep;
	//������ ������� ������ �����ϸ� 40 ���Ҹ� �������� �̸��� �̻��� �з�
	iter_sep = stable_partition(v.begin(), v.end(), Pred); 
	
	cout<<"40�̸��� ������: ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_sep; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;

	cout<<"40�̻��� ������: ";
	for(vector<int>::iterator iter = iter_sep; iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S4 */








#ifdef S5

//random_shuffle() �˰��� 
int main()
{
	vector<int> v;
	
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	v.push_back(60);
	
	cout<< "v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
//	#inlcude <ctime> //�߰� ���� �ʱ갪
//	srand((unsigned)time(NULL)); 
	
	random_shuffle(v.begin(), v.end()); //���Ҹ� �ڼ��´�. 
	
	cout<< "v : "; 
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;


	
	random_shuffle(v.begin(), v.end()); //���Ҹ� �ڼ��´�. 

	cout<< "v : "; 
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	

	return 0;
} 
#endif /* S5 */







#ifdef S6

//reverse() �˰���
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<< endl;
	
	reverse(v.begin(), v.end()); //[v.begin(), v.end()) ������ ������ 
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<< endl;
	
	return 0;	
}
#endif /* S6 */ 








#ifdef S7

//reverse_copy() �˰���
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	cout<<"v1 : ";
	for(vector<int>::size_type i = 0; i <v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	vector<int> v2(5); //size : 5�� vector ����(������̹Ƿ�)
	

	vector<int>::iterator iter_end;
	iter_end = reverse_copy(v1.begin(), v1.end(), v2.begin());

	
	cout<<"v2 : ";
	for(vector<int>::iterator iter = v2.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
}  
#endif /* S7 */







#ifdef S8

//rotate() �˰���
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
	
	
	vector<int>::iterator middle = v.begin()+2;
	rotate(v.begin(), middle, v.end()); //��� ���Ҹ� �������� 2��ŭ�� ȸ�� 
	
	cout<<"v : ";
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;

	return 0; 
} 
#endif /* S8 */







#ifdef S9

//rotate_copy() �˰��� 
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	cout<<"v1 : ";
	for(vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] << " ";
	}
	cout<<endl;
	
	vector<int> v2(5); 
	vector<int>::iterator middle = v1.begin()+2;
	vector<int>::iterator iter_end;
	//��� ���Ҹ� �������� 2��ŭ�� ȸ���Ͽ� [v2.begin(), iter_end) �������� ���� 
	iter_end = rotate_copy(v1.begin(), middle, v1.end(), v2.begin()); 
	
	
	cout<<"v2 : ";
	for(vector<int>::iterator iter = v2.begin(); iter != iter_end; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;

	return 0; 
} 
#endif /* S9 */
