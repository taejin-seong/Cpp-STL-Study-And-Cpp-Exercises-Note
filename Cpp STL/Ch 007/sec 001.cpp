#include <iostream>
#include <set>
#include <typeinfo>
 

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
#define S10
 
 


#ifdef S1

//set의 insert()
int main()
{
	set<int> s; //정수 원소를 저장하는 기본 정렬 기준이 less인 빈 컨테이너 생성
	
	s.insert(50); //랜덤으로 원소(key)를 삽입  * s.insert(k): k를 s에 삽입 
	s.insert(30);
	s.insert(80);
	s.insert(40); 
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter; //기본 정렬 기준이 less인 set의 양방향 반복자
	
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter <<" "; //inorder 이진 트리 탐색 순서로 출력 
	}
	cout<<endl;
	
	s.insert(50); //중복된 원소(key)를 삽입한다. 실패 (원소의 중복을 허용x) 
	s.insert(50);
	
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter <<" "; //결과는 같음 
	}
	cout<<endl;
	
	return 0;
 } 
#endif /* S1 */ 






#ifdef S2

//insert()의 반환값(pair 객체)
int main()
{
	set<int> s;
	
	pair<set<int>::iterator, bool> pr; 
	
	pr = s.insert(50); //50 원소의 첫 번째 삽입 *50을 s에 삽입하고 결과를 pr 객체에 저장 
	s.insert(40);
	s.insert(80);
	
	if(true == pr.second) // pr.second는 삽입 성공(true), 실패(false)를 나타내는 bool 값 
	{
		cout<< *pr.first <<" 삽입 성공!" <<endl; //pr.first는 50 원소를 가리키는 반복자
	}
	
	else
	{
		cout<< *pr.first <<" 가 이미 있습니다. 삽입 실패!" << endl;
	}
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	
	pr = s.insert(50); //50 원소의 두 번쨰 삽입. 실패
	
	
	if(true == pr.second)
	{
		cout<< *pr.first << " 삽입 성공!"<<endl;
	}
	
	else
	{
		cout<< *pr.first <<" 가 이미 있습니다. 삽입 실패!" << endl;
	}
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;
 
} 
#endif /* S2 */






#ifdef S3

//set의 탐색 위치 지정 insert()
int main()
{
	set<int> s;
	
	pair<set<int>::iterator, bool> pr;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	pr = s.insert(90); //pr.first는 90 원소의 반복자
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	s.insert(pr.first, 85); //90 원소의 반복자에서 검색 시작 후 삽입
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	 
	return 0;
} 
#endif /* S3 */







#ifdef S4

//정렬 기준 greater를 사용한 set
int main()
{
	set<int, greater<int> >  s; //정렬 기준으로 greater<int> 조건자를 사용
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int, greater<int> >::iterator iter; //greator<int> 조건자를 사용하는 반복자 생성
 	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0; 
} 
#endif /* S4 */






#ifdef S5

//set의 key_comp(), vlaue_comp() 멤버 함수
int main()
{
	set<int, less<int> > s_less;  //set<int> s와 같음
	set<int, greater<int> > s_greater; //정렬 기준으로 greater<int> 조건자를 사용
	
	s_less.insert(50);
	s_less.insert(80);
	s_less.insert(40);
	
	s_greater.insert(50);
	s_greater.insert(80);
	s_greater.insert(40);
	
	set<int, less<int> >::key_compare l_cmp = s_less.key_comp();
	cout<< l_cmp(10, 20) <<endl; //10 < 20 연산, bool 값을 반환 
	
	set<int, greater<int> >::key_compare g_cmp = s_greater.key_comp();
	cout<< g_cmp(10, 20) <<endl; //10 > 20 연산, bool 값을 반환 
	
	cout<< "key_compare type: "<< typeid(s_less.key_comp()).name() <<endl; 
	cout<< "key_compare type: "<< typeid(s_greater.key_comp()).name() <<endl;
	 
	cout<< "value_compare type: "<< typeid(s_less.key_comp()).name() <<endl; 
	cout<< "value_compare type: "<< typeid(s_greater.key_comp()).name() <<endl; 
	
	return 0;
 } 
#endif /* S5 */







#ifdef S6

//set의 count()
int main()
{
	set<int> s;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter;
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	cout<< "원소 50의 개수: "<<s.count(50) <<endl; // 원소(key)와 일치하는 개수를 반환 
	cout<< "원소 100의 개수: "<<s.count(100)<<endl;
	
	return 0;
} 
#endif /* S6 */






#ifdef S7

//set의 find()
int main()
{
	set<int> s;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter <<endl;
	}
	
	
	iter = s.find(30); //30의 반복자를 반환
	
	
	if(iter != s.end()) // 만약 찾는 원소가 없으면 끝 표시 반복자를 반환 
	{
		cout<< *iter <<"가 s에 있다!"<<endl;
	}
	
	else
	{
		cout<< "30이 s에 없다."<<endl;
	}
	
	return 0; 
	
} 
#endif /* S7 */






#ifdef S8

//set의 정렬 기준을 사용한 값 비교 
int main()
{
	set<int, less<int> > s; //정렬 기준 less
	
	cout<< !(s.key_comp()(30, 50) && !s.key_comp()(50, 30)) <<endl; //30과 50의 비교, 다르다 
	
	cout<< (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) <<endl; //30과 30의 비교, 같다 
	
	return 0; 
}
#endif /* S8 */	






#ifdef S9

//set의 lower_bound(), upper_bound()
int main()
{
	set<int> s;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	
	set<int>::iterator iter_lower; //찾은 원소의 시작 반복자 
	set<int>::iterator iter_upper; //찾은 원소의 다음 원소를 가리키는 반복자 
	
	iter_lower = s.lower_bound(30);
	iter_upper = s.upper_bound(30);
	cout<< *iter_lower <<endl;
	cout<< *iter_upper <<endl;
	
	iter_lower = s.lower_bound(55);
	iter_upper = s.upper_bound(55);
	
	if(iter_lower != iter_upper) //[iter_lower, iter_upper)에서 두 반복자가 같다면 찾는 원소는 없음 
	{
		cout<< "55가 s에 있음!" <<endl;

	}
	
	else
	{
		cout<< "55가 s에 없음!"<<endl;
	}
	
	return 0;  
} 
#endif /* S9 */ 







#ifdef S10

//set의 equal_range()
int main()
{
	set<int> s;
	
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	
	set<int>::iterator iter;
	
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	pair<set<int>::iterator, set<int>::iterator> iter_pair; //반복자 쌍의 pair 객체	
	
	iter_pair = s.equal_range(30);
	cout<< *iter_pair.first <<endl;
	cout<< *iter_pair.second <<endl;
	
	
	iter_pair = s.equal_range(55);
	
	if(iter_pair.first != iter_pair.second)
	{
		cout<< "55가 s에 있음!"<<endl;
	}
	else
	{
		cout<< "55가 s에 없음!"<<endl;
	}
	
	return 0;
} 
#endif /* S10 */ 
