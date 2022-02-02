#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
 
using namespace std;


#define S1
//#define S2
//#define S3




#ifdef S1

//X::iterator와 X::reverse_iterator의 동작 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	cout<< "v[iterator] : ";
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	cout<<"v[reverse_iterator] : ";
	for(vector<int>::reverse_iterator riter = v.rbegin(); riter != v.rend(); ++riter)
	{
		cout<< *riter << " ";
	}
	cout<<endl;
	
	
	return 0; 
} 
#endif /* S1 */
//~p492
