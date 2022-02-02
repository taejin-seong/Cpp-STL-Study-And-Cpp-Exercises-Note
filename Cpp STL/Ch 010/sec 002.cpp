#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
 
using namespace std;


//#define S1
//#define S2
#define S3
#define S4




#ifdef S1

//iterator와 const_iterator
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<< "v[iterator 읽기 가능] : ";
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	cout<<"v[const iterator 읽기 가능] : ";
	for(vector<int>::const_iterator citer = v.begin(); citer != v.end(); ++citer)
	{
		cout<< *citer << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();
	
	*iter = 100; //쓰기 가능!
//	*citer = 100; // 쓰기 불가능! error - 상수 iterator로 가리키는 원소 수정 불가!
	
	return 0; 
} 
#endif /* S1 */








#ifdef S2

//X::iterator, X::const_iterator, const X::iterator, const X::const_iterator 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin() +1;
	const vector<int>::iterator const_iter = v.begin() +2;
	const vector<int>::const_iterator const_citer = v.begin() +3;
	
	//iter는 모두 가능
	*iter = 100; //가리키는 원소 변경 가능 
	++iter; //반복자 변경 가능 
	
	//citer
	*citer = 200; //가리키는 원소 변경 불가능
	++citer; //반복자 변경 가능 
	
	//const_iter
	*const_iter = 300; //가리키는 원소 변경 가능
	++const_iter; //반복자 변경 불가능
		
	//const_citer
	*const_citer = 400; //가리키는 원소 변경 불가능
	++const_citer; //반복자 변경 불가능 
	
	return 0; 
} 
#endif /* S2 */








#ifdef 	S3

//vector의 임의 접근 반복자와 list의 양방향 반복자 
class Point
{
	private:
		int x;
		int y;
	
	public:
		explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) 
		{ }
		
		void Print() const
		{
			cout<< '(' << x <<','<<y<<')'<<endl;
		}
};


int main()
{

	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	
	vector<int>::iterator viter = v.begin();
	list<int>::iterator liter = lt.begin();
	
	
	cout<< "vector: " << *viter << endl;
	cout<< "list: " << *liter <<endl;

	cout<< "vector: " << *viter << endl;
	cout<< "list: " << *liter <<endl;

	cout<< "vector: " << *++viter << endl;
	cout<< "list: " << *++liter <<endl;

	cout<< "vector: " << *--viter << endl;
	cout<< "list: " << *--liter <<endl;
	
	viter += 2; //임의 접근 반복자는 [], +=, -=, +, -, <, >, <=, >= 연산 가능 
//	list += 2; //양방향 반복자는 불가능 


    cout<< "=============================="<<endl;
    
    vector<Point> ptVector;
    ptVector.push_back(Point(2, 5));
    
    list<Point> ptList;
    ptList.push_back(Point(2, 5));
    
    vector<Point>::iterator ptVIter = ptVector.begin();
    ptVIter->Print();
    
    list<Point>::iterator ptLIter = ptList.begin();
    ptLIter->Print();
    
    
    return 0;
}
#endif /* S3 */
