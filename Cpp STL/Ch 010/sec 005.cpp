#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
#include <iterator>
 
using namespace std;


//#define S1
#define S2




#ifdef S1

//ostream_iterator 출력 스트림 반복자 
int main()
{
	vector<int> v;
	 
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<< "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout));
	cout<<endl;
	
	cout<< "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
	cout<<endl;
	
	list<int> lt;
	lt.push_back(100);
	lt.push_back(200);
	lt.push_back(300);
	
	cout<<"lt+v : ";
	transform(lt.begin(), lt.end(), v.begin(), ostream_iterator<int>(cout, ", "), plus<int>());
	cout<<endl;
	
	return 0;

}
#endif /* S1 */








#ifdef S2

//istream_iterator 입력 스트림 반복자 
int main()
{
	vector<int> v;
	
	//표준 입력 스트림에서 정수를 입력받아 v에 저장 
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter<vector<int> >(v));
	
	cout<< "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;

	//정수를 스트림 끝(Ctrl-D)까지 입력 받아 화면에 출력 
//	copy(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));
	
	return 0;	
}
#endif /* S2 */
