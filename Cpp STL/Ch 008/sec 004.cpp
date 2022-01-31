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

//next_permulation() 알고리즘
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
	//마지막 순열이므로 next_permutation()은 false 반환 
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end()) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	 
	 return 0;
	
} 
#endif /* S1 */







#ifdef S2

//조건자 버전 next_permutation() 알고리즘 
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
	out<< "(" <<arg.GetX() << "," <<arg.GetY() << ")"; //Point 객체 cout 출력을 위한 연산자 오버로딩 
	
	return out;
}



bool Pred(const Point& left, const Point& right)
{
	return left.GetY() < right.GetY(); //순열의 비교 기준으로 사용될 이항 조건자 
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
	//Point의 y를 기준으로 마지막 순열이므로 next_permutation()은 false 반환 
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	cout<< next_permutation(v.begin(), v.end(), Pred) <<endl;
	cout<< "v : " << v[0] << " " << v[1] << " " << v[2] <<endl;
	 
	return 0;
	
} 
#endif /* S2 */








#ifdef S3

//partition() 알고리즘 
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
	iter_sep = partition(v.begin(), v.end(), Pred); //40 원소를 기준으로 미만과 이상을 분류 
	
	cout<<"40미만의 순차열: ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_sep; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;

	cout<<"40이상의 순차열: ";
	for(vector<int>::iterator iter = iter_sep; iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S3 */








#ifdef S4

//stable_partition() 알고리즘 
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
	//원소의 상대적인 순서를 유지하며 40 원소를 기준으로 미만과 이상을 분류
	iter_sep = stable_partition(v.begin(), v.end(), Pred); 
	
	cout<<"40미만의 순차열: ";
	for(vector<int>::iterator iter = v.begin(); iter != iter_sep; ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;

	cout<<"40이상의 순차열: ";
	for(vector<int>::iterator iter = iter_sep; iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S4 */








#ifdef S5

//random_shuffle() 알고리즘 
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
	
	
//	#inlcude <ctime> //추가 랜덤 초깃값
//	srand((unsigned)time(NULL)); 
	
	random_shuffle(v.begin(), v.end()); //원소를 뒤섞는다. 
	
	cout<< "v : "; 
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;


	
	random_shuffle(v.begin(), v.end()); //원소를 뒤섞는다. 

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

//reverse() 알고리즘
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
	
	reverse(v.begin(), v.end()); //[v.begin(), v.end()) 순차열 뒤집기 
	
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

//reverse_copy() 알고리즘
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
	
	vector<int> v2(5); //size : 5인 vector 생성(덮어쓰기이므로)
	

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

//rotate() 알고리즘
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
	rotate(v.begin(), middle, v.end()); //모든 원소를 왼쪽으로 2만큼씩 회전 
	
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

//rotate_copy() 알고리즘 
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
	//모든 원소를 왼쪽으로 2만큼씩 회전하여 [v2.begin(), iter_end) 순차열에 복사 
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
