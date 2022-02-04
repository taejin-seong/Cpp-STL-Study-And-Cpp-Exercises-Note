#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
#include <iterator>
 
using namespace std;


//#define S1
#define S2




#ifdef S1

//ostream_iterator ��� ��Ʈ�� �ݺ��� 
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

//istream_iterator �Է� ��Ʈ�� �ݺ��� 
int main()
{
	vector<int> v;
	
	//ǥ�� �Է� ��Ʈ������ ������ �Է¹޾� v�� ���� 
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter<vector<int> >(v));
	
	cout<< "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;

	//������ ��Ʈ�� ��(Ctrl-D)���� �Է� �޾� ȭ�鿡 ��� 
//	copy(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));
	
	return 0;	
}
#endif /* S2 */
