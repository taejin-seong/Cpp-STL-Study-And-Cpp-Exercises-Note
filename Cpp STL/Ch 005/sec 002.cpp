#include <iostream>
#include <vector> //배열 기반 컨테이너 vector의 헤더
#include <deque> //배열 기반 컨테이너 deque의 헤더 
#include <algorithm> //알고리즘 헤더 (find, sort 사용) 
#include <list> //노드 기반 컨테이너 list 헤더 
#include <stack> //컨테이너 어댑터 stack 해더  
#include <functional> // 함수 어댑터 헤더 (not2 사용) 
#include <set> //노드 기반 컨테이너 set 헤더 


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
//#define S10
//#define S11
//#define S12
#define S13



#ifdef S1

//vector 컨테이너 
int main()
{
	vector<int> v; //int 타입을 저장하는 컨테이너 v를 생성
	
	v.push_back(10); //v에 정수 10을 추가 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<endl; //v[i]는 i번째 인덱스 정수 반환 
	}
	
	return 0; 
 } 
#endif /* S1 */





#ifdef S2

//vector의 반복자 
int main()
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter; //반복자 생성
	 
	for (iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<endl; //반복자가 가리키는 원소를 역참조 
	}
	
	return 0; 
 } 
#endif /* S2 */






#ifdef S3

//vector의 임의 접근 반복자 
int main()
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin(); //시작 원소를 가리키는 반복자 
	
	cout<< iter[0] <<endl; //iter[i]: iter+i번째 원소에 접근 
	cout<< iter[1] <<endl;
	cout<< iter[2] <<endl;
	cout<< iter[3] <<endl;
	cout<< iter[4] <<endl;
	cout<< endl; 
	
	iter += 2; //iter += n: iter를 n만큼 이동
	cout<< *iter <<endl;
	cout<<endl; 
	
	vector<int>::iterator iter2 = iter+2; //iter2 = iter-n: iter위치에 -n한 위치의 반복자를 iter2에 대입
	cout<< *iter2 <<endl; 
	
	return 0; 
 } 
#endif /* S3 */







#ifdef S4

//deque의 임의 접근 반복자 
int main()
{
	deque<int> dq; 
	
	dq.push_back(10); 
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);
	
	deque<int>::iterator iter = dq.begin();  
	
	cout<< iter[0] <<endl;  
	cout<< iter[1] <<endl;
	cout<< iter[2] <<endl;
	cout<< iter[3] <<endl;
	cout<< iter[4] <<endl;
	cout<< endl; 
	
	iter += 2; 
	cout<< *iter <<endl;
	cout<<endl; 
	
	deque<int>::iterator iter2 = iter+2;
	cout<< *iter2 <<endl; 
	
	return 0; 
 } 
#endif /* S4 */






#ifdef S5

//find 알고리즘
int main(void)
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter;
	
	iter = find(v.begin(), v.end(), 20); //[begin, end)에서 20 찾기
	cout<< *iter <<endl; 
	
	iter = find(v.begin(), v.end(), 100); //[begin, end)에서 100 찾기
	if (iter == v.end()) //100이 없으면 iter==v.end()임 
	{
		cout<< "100이 없음!" <<endl; 
	}
	
	return 0; 
 } 
#endif /* S5 */






#ifdef S6

//vector와 list 컨테이너 반복자와 sort 알고리즘
int main()
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	//sort 알고리즘은 임의 접근 반복자를 요구 	
	sort(v.begin(), v.end()); //정렬 가능 (vector는 임의 접근 반복자)
	sort(lt.begin(), lt.end()); //error! (list는 양방향 반복자) 
	
	return 0; 
} 
#endif /* S6 */






#ifdef S7

//함수 객체를 적용한 sort 알고리즘 
int main()
{
	vector<int> v; 
	
	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	//함수 객체: less, greater 	
	//sort(b,e,f): f를 정렬 기준으로 정렬한다. 
	sort(v.begin(), v.end(), less<int>()); //오름차순 정렬
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<endl;
	} 
	cout<<endl;
	
	
	sort(v.begin(), v.end(), greater<int>()); //내림차순 정렬
	for(vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<endl;
	} 
	cout<<endl;
		
	return 0; 
} 
#endif /* S7 */






#ifdef S8

//stack 컨테이너 
int main()
{
	//stack 컨테이너 어댑터: 일반 컨테이너를 LIFO 방식의 stack 컨테이너로 변환. 
	stack<int> st; //stack 컨테이너 생성, 디폴트 컨테이너로 deque<int>를 사용 
	
	st.push(10); //데이터 추가 
	st.push(20);
	st.push(30);
	
	cout<< st.top() <<endl; //top 데이터 출력
	st.pop(); //top 데이터 삭제
	
	cout<<st.top()<<endl;
	st.pop(); 
	
	if(st.empty()) //스택이 비었는지 확인
	{
		cout<< "stack에 데이터 없음"<<endl;
	}
	
	return 0; 
	 
} 
#endif /* S8 */





#ifdef S9

//역방향 반복자 reverse_iterator 
int main()
{
	vector<int> v;

	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<< endl;
	
	//일반 반복자 iterator를 역방향 반복자 reverse_iterator로 변환 
	reverse_iterator<vector<int>::iterator> riter(v.end());
	reverse_iterator<vector<int>::iterator> end_riter(v.begin());
	
	for(; riter != end_riter; ++riter)
	{
		cout<< *riter <<" ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S9 */






#ifdef S10

//vector의 역방향 반복자
int main()
{
	vector<int> v;

	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout <<endl;
	
	//STL 모든 컨테이너는 반복자 어댑터 reverse_iterator를 typedef 타입으로 정의하며 
	//rbegin(), rend()로 컨테이너의 역방향 반복자를 반환
	vector<int>::reverse_iterator riter(v.rbegin());
	
	for (; riter != v.rend(); ++riter)
	{
		cout<< *riter << " ";
	}
	cout<<endl;
	
	return 0;
	 
 } 
#endif /* S10 */







#ifdef S11

//정방향 반복자와 역방향 반복자가 가리키는 값 
int main()
{
	vector<int> v;

	v.push_back(10); 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator normal_iter = v.begin() + 3; //40 원소를 가리키는 정방향 반복자 
	vector<int>::reverse_iterator reverse_iter(normal_iter); //normal_iter의 역방향 반복자 
	
	cout<< "정방향 반복자의 값: "<< *normal_iter <<endl;
	cout<< "역방향 반복자의 값: "<< *reverse_iter <<endl;
	cout<<endl;
	
	for (vector<int>::iterator iter = v.begin(); iter != normal_iter; ++iter)
	{
		cout<< *iter <<" "; //정방향 출력 
	}
	cout<<endl;
	
	for (vector<int>::reverse_iterator riter = reverse_iter; riter != v.rend(); ++riter)
	{
		cout<< *riter <<" "; //역방향 출력 
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S11 */







#ifdef S12

//less 조건자와 not2 
int main()
{
	cout<< less<int>()(10, 20) <<endl; //임시 less 객체로 비교 
	cout<< less<int>()(20, 20) <<endl; 
	cout<< less<int>()(20, 10) <<endl; 
	cout<< "==========" <<endl;
	
	
	cout<< not2(less<int>())(10, 20) <<endl; //임시 객체 less에 not2 어댑터 적용 
	cout<< not2(less<int>())(20, 20) <<endl;
	cout<< not2(less<int>())(20, 10) <<endl;	
	cout<< endl;
	
	
	less<int> l;
	cout<< l(10, 20) <<endl; //less 객체 l로 비교 a>=b 1
	cout<< l(20, 20) <<endl; // a=b 0
	cout<< l(20, 10) <<endl; // a<b 0
	cout<< "==========" <<endl;
	
	
	cout<< not2(l)(10, 20) <<endl; //less 객체 l에 not2 어댑터 적용 a>=b 0
	cout<< not2(l)(20, 20) <<endl; // a=b 1
	cout<< not2(l)(20, 10) <<endl; // a<b 1
	
	
	return 0;
} 
#endif /* S12 */






#ifdef S13

//컨테이너 기본 할당기 allocator<T> 
int main()
{
	//vector<class T, class Alloc = allocator<T>>, vector<int>와 같음
	vector<int, allocator<int> > v;
	
	v.push_back(10);
	cout<< *v.begin() <<endl;
	
	
	//set<class T, class Red = less<T>, class Alloc = allocator<T>>, set<int>와 같음 
	set<int, less<int>, allocator<int> > s;

	s.insert(10);
	cout<< *s.begin() <<endl;
	
	return 0; 
} 
#endif /* S13 */
