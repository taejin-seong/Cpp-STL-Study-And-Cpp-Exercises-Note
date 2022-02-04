#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
#include <iterator>
 
using namespace std;


//#define S1
#define S2




#ifdef S1

//삽입 반복자 어댑터 inserter() 
int main()
{
	vector<int> v1;
	 
	 v1.push_back(10);
	 v1.push_back(20);
	 v1.push_back(30);
	 v1.push_back(40);
	 v1.push_back(50);
	 
	 vector<int>  v2; //size : 0 인 vector 생성
	 
	 //copy(v1.begin(), v1.end(), v2.begin()); //error!
	 //insert_iterator<vector<int> > insert(v2, v2.begin());
	 //copy(v1.begin(), inserter<vector<int> >(v2 v2.begin())); //객체 생성 후 호출 
	 copy(v1.begin(), v1.end(), inserter<vector<int> > (v2, v2.begin()));
	 
	 cout<<" v1 : ";
	 for(vector<int>::iterator iter = v1.begin(); iter != v1.end(); ++iter)
	 {
	 	cout<< *iter << " ";
	 }
	 
	 cout<<endl;
	 cout<< " v2 : ";
	 for(vector<int>::iterator iter = v2.begin(); iter != v2.end(); ++iter)
	 {
	 	cout<< *iter << " ";
	} 
	  
	  return 0;
}
#endif /* S1 */








#ifdef S2

//back_inserter(), front_inserter() 
int main()
{
	vector<int> v;
	 
	 v.push_back(10);
	 v.push_back(20);
	 v.push_back(30);
	 v.push_back(40);
	 v.push_back(50);
	 
	 list<int> lt1;

	 lt1.push_back(1);
	 lt1.push_back(2);
	 lt1.push_back(3);
	 
	 list<int> lt2;

	 lt2.push_back(1);
	 lt2.push_back(2);
	 lt2.push_back(3);
	 
	 copy(v.begin(), v.end(), back_inserter<list<int> >(lt1));
	 copy(v.begin(), v.end(), front_inserter<list<int> >(lt2));
	 
	 cout<<" v: ";
	 for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	 {
	 	cout<< *iter << " ";	
	 }
	 cout<<endl;

     
	 cout<<"lt2 : ";
	 for(list<int>::iterator iter = lt1.begin(); iter != lt1.end(); ++iter)
	 {
	 	cout<< *iter << " ";
	 }
	 cout<<endl;
	 
	 
	 cout<<"lt2 : ";
	 for(list<int>::iterator iter = lt2.begin(); iter != lt2.end(); ++iter)
	 {
	 	cout<< *iter << " ";
	 }
	 cout<<endl;
	 
	 return 0;
	  
}
#endif /* S2 */
