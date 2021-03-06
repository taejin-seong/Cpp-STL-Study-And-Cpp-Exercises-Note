#include <iostream>
#include <map> 
#include <string> 

using namespace std;


//#define S1
//#define S2
//#define S3
//#define S4
//#define S5
#define S6

 


#ifdef S1

//map의 insert() 
int main()
{
	//map<key type, value type> m;
	map<int, int> m; //key, value 모두 정수형인 컨테이너 생성
	                 //기본 정렬 기준 less
	
	//m.insert(pair<key type, value type> (key, value));
	m.insert(pair<int, int>(5, 100)); //임시 pair 객체 생성 후 저장 
	m.insert(pair<int, int>(3, 100));
	m.insert(pair<int, int>(8, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 70));
	m.insert(pair<int, int>(7, 100));
	 
	pair<int, int> pr(9,50);
	m.insert(pr); //pr 객체 생성 후 저장 
	
	map<int, int>::iterator iter;
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<<"("<< (*iter).first << "," << (*iter).second <<")"<<" "; //first (key), second (value)
	}
	cout<<endl;
	
	//반복자는 -> 연산자가 연산자 오버로딩되어 있으므로 포인터처럼 멤버를 -> 연산자로 접근할 수 있다. 
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<<"("<< iter->first << "," << iter->second <<")"<<" ";
	}
	cout<<endl;
	
	return 0;
}
#endif /* S1 */






#ifdef S2

//map의 insert() 반환 값	
int main()
{
	map<int, int> m;
	pair<map<int, int>::iterator, bool> pr; //insert() 결과 pair 객체
	
	m.insert(pair<int, int>(5,100));
	m.insert(pair<int, int>(3,100));
	m.insert(pair<int, int>(8,30));
	m.insert(pair<int, int>(4,40));
	m.insert(pair<int, int>(1,70));
	m.insert(pair<int, int>(7,100));
	
	pr = m.insert(pair<int, int>(9, 50)); //성공
	
	if(true == pr.second)
	{
		cout<< "key: "<< pr.first->first << ", value: " << pr.first->second <<" 저장 완료!"<<endl; 
	}
	
	else
	{
		cout<< "key 9가 이미 m에 잇습니다."<<endl;
	}
	
	pr = m.insert(pair<int, int>(9,50)); //실패 
		
	if(true == pr.second)
	{
		cout<< "key: "<< pr.first->first << ", value: " << pr.first->second <<" 저장 완료!"<<endl; 
	}
	
	else
	{
		cout<< "key 9가 이미 m에 잇습니다."<<endl;
	}
	 
	return 0; 
} 
#endif /* S2 */ 






#ifdef S3

//map의 [] 연산자
int main()
{
	map<int, int> m;
	
	m[5] = 100; //key 5, value 100의 원소를 m에 삽입한다.
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;
	
	map<int, int>::iterator iter;
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;
	
	m[5] = 200; //key 5의 value를 200으로 갱신한다.
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	
	return 0;

 } 
#endif /* S3 */ 






#ifdef S4

//map 컨테이너의 정렬 기준 조건자 greater
int main()
{
	map<int, string, greater<int> > m; //greater 정렬 기준의 key:int, value:string 타입의 컨테이너 m 생성 
		
	m[5] = "five"; //원소 추가 
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";
	m[9] = "nine";
	
	map<int, string, greater<int> >::iterator iter;
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" <<" ";
	}
	cout<<endl;
	
	cout<< m[9] <<" "; //key와 매핑된 value를 출력
	cout<< m[8] <<" ";
	cout<< m[7] <<" ";
	cout<< m[5] <<" ";
	cout<< m[4] <<" ";
	cout<< m[3] <<" ";
	cout<< m[1] <<" ";
	
	return 0;
} 
#endif /* S4 */







#ifdef S5

//map의 찾기 관련 멤버 함수
int main()
{
	map<int, int> m;
	
	m[5] = 100; 
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;
	
	map<int, int>::iterator iter;
	
	for(iter = m.begin(); iter != m.end(); ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;	
	
	
		
	iter = m.find(5);
	
	if(iter != m.end())
	{
		cout<< "key 5에 매핑된 value: "<<iter->second <<endl;
	}
	
	
	
	map<int,int>::iterator lower_iter;
	map<int,int>::iterator upper_iter;
	lower_iter = m.lower_bound(5);
	upper_iter = m.upper_bound(5);
	
	cout<< "구간 [lower_iter, upper_iter)의 순차열";
	for(iter = lower_iter; iter != upper_iter; ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;
	
	
		
	pair<map<int, int>::iterator, map<int,int>::iterator> iter_pair;
	iter_pair = m.equal_range(5);
	
	cout<< "구간 [lower_pair.first, upper_pair.first)의 순차열";
	for(iter = iter_pair.first; iter != iter_pair.second; ++iter)
	{
		cout<< "(" << iter->first << "," << iter->second << ")" << " ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S5 */
