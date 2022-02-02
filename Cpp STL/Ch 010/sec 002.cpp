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

//iterator�� const_iterator
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<< "v[iterator �б� ����] : ";
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	cout<<"v[const iterator �б� ����] : ";
	for(vector<int>::const_iterator citer = v.begin(); citer != v.end(); ++citer)
	{
		cout<< *citer << " ";
	}
	cout<<endl;
	
	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();
	
	*iter = 100; //���� ����!
//	*citer = 100; // ���� �Ұ���! error - ��� iterator�� ����Ű�� ���� ���� �Ұ�!
	
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
	
	//iter�� ��� ����
	*iter = 100; //����Ű�� ���� ���� ���� 
	++iter; //�ݺ��� ���� ���� 
	
	//citer
	*citer = 200; //����Ű�� ���� ���� �Ұ���
	++citer; //�ݺ��� ���� ���� 
	
	//const_iter
	*const_iter = 300; //����Ű�� ���� ���� ����
	++const_iter; //�ݺ��� ���� �Ұ���
		
	//const_citer
	*const_citer = 400; //����Ű�� ���� ���� �Ұ���
	++const_citer; //�ݺ��� ���� �Ұ��� 
	
	return 0; 
} 
#endif /* S2 */








#ifdef 	S3

//vector�� ���� ���� �ݺ��ڿ� list�� ����� �ݺ��� 
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
	
	viter += 2; //���� ���� �ݺ��ڴ� [], +=, -=, +, -, <, >, <=, >= ���� ���� 
//	list += 2; //����� �ݺ��ڴ� �Ұ��� 


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
