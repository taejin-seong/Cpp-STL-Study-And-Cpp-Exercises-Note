#include <iostream>
#include <map>

using namespace std;


//#define S1
#define S2
 


#ifdef S1

//multimap�� count()�� find()
int main()
{
	multimap<int, int> mm;
	
	mm.insert(pair<int, int>(5, 100));
	mm.insert(pair<int, int>(3, 100));
	mm.insert(pair<int, int>(8, 30));
	mm.insert(pair<int, int>(3, 40));
	mm.insert(pair<int, int>(1, 70));
	mm.insert(pair<int, int>(7, 100));
	mm.insert(pair<int, int>(8, 50));
	
	multimap<int, int>::iterator iter;
	for(iter = mm.begin(); iter != mm.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" <<" ";
	}
	cout<<endl;
	
	cout<< "key 3�� ������ ������ " << mm.count(3) <<endl;
	
	iter = mm.find(3);
	
	if(iter != mm.end())
	{
		cout<< "ù��° key 3�� ���ε� value: "<< iter->second <<endl;
	}
	
	return 0; 
} 
#endif /* S1 */







#ifdef S2

//multimap�� lower_bound(), upper_bound(), equal_range()
int main()
{
	multimap<int, int> mm;
	
	mm.insert(pair<int, int>(5, 100));
	mm.insert(pair<int, int>(3, 100));
	mm.insert(pair<int, int>(8, 30));
	mm.insert(pair<int, int>(3, 40));
	mm.insert(pair<int, int>(1, 70));
	mm.insert(pair<int, int>(7, 100));
	mm.insert(pair<int, int>(8, 50));
	
	multimap<int, int>::iterator lower_iter;
	multimap<int, int>::iterator upper_iter;
	lower_iter = mm.lower_bound(3);
	upper_iter = mm.upper_bound(3);
	
	
	cout<< "���� [lower_iter, upper_iter)�� ������: ";
	multimap<int, int>::iterator iter;
	for(iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;
	
	
		
	pair<multimap<int, int>::iterator, multimap<int, int>::iterator> iter_pair;
	iter_pair = mm.equal_range(3);
	
	cout<< "���� [lower_pair.first, upper_pair.first)�� ������: ";
	for(iter = iter_pair.first; iter != iter_pair.second; ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S2 */