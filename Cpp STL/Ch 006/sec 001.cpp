#include <iostream>
#include <vector>
#include <typeinfo>
#include <stdexcept>


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
//#define S13
//#define S14
//#define S15
//#define S16
//#define S17
//#define S18
//#define S19
//#define S20
//#define S21 
//#define S22
//#define S23
//#define S24
//#define S25
#define S26


#ifdef S1

//vector의 push_back()
int main()
{
	vector<int> v; //int 타입의 원소를 저장하는 컨테이너 v를 생성 
	
	v.push_back(10); //v.push_back(x): v에 x를 추가 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (int i = 0; i < v.size(); ++i) //v.size(): v의 원소의 개수 반환 
	{
		cout<< v[i] <<endl; //v[i]: v의 i번째 원소를 참조 
	}
	
	return 0;
	
 } 
#endif /* S1 */







#ifdef S2

//vector의 size_type 
int main()
{
	vector<int> v;  
	
	v.push_back(10);  
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<endl;
	}
	
	cout<< typeid(vector<int>::size_type).name() <<endl;
	
	return 0;
		
 } 
#endif /* S2 */








#ifdef S3

//vector의 size(), capacity(), max_size() 
int main()
{
	vector<int> v;  
	
	v.push_back(10);  
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
	cout<< v.size() <<endl;     //size(): 저장 원소의 개수  
	cout<< v.capacity() <<endl; //capacity(): 실제 할당된 메모리 공간의 크기  *vector만이 유일하게 가지는 멤버함수 
	cout<< v.max_size() <<endl; //max_size(): 컨테이너가 담을 수 있는 최대 원소의 개수  
	
	return 0;
		
 } 
#endif /* S3 */ 






#ifdef S4

//vector의 capacity()
int main()
{
	vector<int> v;
	
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(10);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(20);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(30);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(40);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(50);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(60);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(70);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(80);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(90);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	for (vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	return 0;
 } 
#endif /* S4 */








#ifdef S5

//vector의 reserve()
int main()
{
	vector<int> v;
	
	v.reserve(8); //v.reserve(n): n개의 원소를 저장할 메모리 공간(capacity)을 미리 할당
	cout<< "size: " << v.size() << " capacity: " << v.capacity() << endl;
	
	v.push_back(10);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(20);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(30);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(40);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(50);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(60);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(70);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(80);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	v.push_back(90);
	cout<<"size: "<< v.size() <<" capacity: "<< v.capacity() <<endl;
	
	for (vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	return 0;
	
	
	 
 } 
#endif /* S5 */






#ifdef S6

//vector의 생성자
int main()
{
	vector<int> v1(5); //0으로 초기화된 size가 5인 컨테이너
	
	v1.push_back(10); //10추가 
	v1.push_back(20); 
	v1.push_back(30); 
	v1.push_back(40); 
	v1.push_back(50); 
	
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;
	
	
	
	vector<int> v2(5); //0으로 초기화된 size가 5인 컨테이너 
	
	v2[0] = 10; //0에서 10으로 수정 
	v2[1] = 20;
	v2[2] = 30;
	v2[3] = 40;
	v2[4] = 50;
	
	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] <<" ";
	}
	cout<<endl;
	
	return 0;	 
	
 } 
#endif /* S6 */ 






#ifdef S7

//vector 생성자의 초깃값 지정
int main()
{
	vector<int> v1(5); //기본값 0으로 초기화된 size가 5인 컨테이너
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl; 
	
	
	vector<int> v2(5, 0); //지정값 0으로 초기화된 size가 5인 컨테이너
	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] <<" ";
	} 
	cout<<endl;
	
	vector<int> v3(5, 10); //지정값 10으로 초기화된 size가 5인 컨테이너
	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
	{
		cout<< v3[i] <<" ";
	} 
	cout<<endl;
	
	return 0;
	
} 
#endif /* S7 */






#ifdef S8

//vector의 resize()
int main()
{
	vector<int> v(5); //기본값 0으로 초기화된 size가 5인 컨테이너 
	
	v[0] = 10; 
	v[1] = 20;
	v[2] = 30;
	v[3] = 40;
	v[4] = 50;
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout << endl;
	cout << "size: "<< v.size() <<" capacity: "<< v.capacity() << endl;



	v.resize(10); //기본값 0으로 초기화된 size가 10인 컨테이너로 확장 *뒤쪽으로 확장됨 
	 
	for(vector<int>::size_type i = 0; i <v.size(); ++i) 
	{
		cout<< v[i] << " ";
	}
	cout << endl;
	cout << "size: "<< v.size() <<" capacity: "<< v.capacity() << endl;

	
	
	
	v.resize(5); //size가 5인 컨테이너로 축소 capacity는 변화없음
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout << endl;
	cout << "size: "<< v.size() <<" capacity: "<< v.capacity() << endl;
 


	return 0;
	 
 } 
#endif /* S8 */






#ifdef S9

//vector의 clear()와 empty()
int main()
{
	vector<int> v(5); 
	
	v[0] = 10; 
	v[1] = 20;
	v[2] = 30;
	v[3] = 40;
	v[4] = 50;
	
	for(vector<int>::size_type i = 0; i <v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout << endl;
	cout << "size: "<< v.size() <<" capacity: "<< v.capacity() << endl;

	v.clear(); //v를 비운다. *메모리 공간은 제거가 되지 않음 ~ 비효율적 
	
	if(v.empty()) //v가 비었는가? 
	{
		cout<< "v에 원소가 없습니다."<<endl;
	} 
	
	return 0; 
	
 } 
#endif /* S9 */






#ifdef S10

//swap을 사용한 할당 메모리 제거
int main()
{
	vector<int> v(5);
	cout<<"size: "<<v.size()<<" capacity: "<<v.capacity()<< endl;
	
	vector<int>().swap(v); //기본 생성자로 만든 vector 컨테이너와 v 컨테이너를 swap한다.
	cout<<"size: "<<v.size() <<" capacity: "<<v.capacity() <<endl;
	
	return 0; 
 } 
#endif /* S10 */







#ifdef S11

//vector의 swap()
int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	
	vector<int> v2;
	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);
	
	for(vector<int>::size_type i = 0; i <v1.size(); i++)
	{
		cout<< v1[i] <<", "<< v2[i] <<endl;
	}
	cout<<endl;
	
	
	v1.swap(v2); //v1과 v2를 swap합니다.
	for(vector<int>::size_type i = 0; i <v1.size(); i++)
	{
		cout<< v1[i] <<", "<< v2[i] <<endl;
	}
	cout<<endl;
	 
	return 0;
 } 
#endif /* S11 */







#ifdef S12

//vector의 front와 back()
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for(vector<int>::size_type i = 0; i <v.size(); i++)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
	cout<< v[0] <<", "<<v.front() <<endl; //첫번째 원소
	cout<< v[4] <<", "<<v.back() <<endl; //마지막 원소 
	
	return 0;
	
 }  
#endif /* S12 */






#ifdef S13

//vector의 front()와 back() 참조
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
	
	v.front() = 100; //첫번쨰 원소를 100으로
	v.back() = 500; //마지막 원소를 500으로 
	
	
	for(vector<int>::size_type i = 0; i < v.size();  ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl; 
	
	return 0;
} 
#endif /* S13 */







#ifdef S14

//vector의 []연산자와 at()멤버함수 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
	
	v[0] = 100; //범위 점검없는 0 인덱스 원소의 참조
	v[4] = 500;  	
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
	
	v.at(0) = 1000; //범위 점검있는 0 인덱스 원소의 참조
	v.at(4) = 5000;  
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
	return 0;
	
}
#endif/* S14 */







#ifdef S15

//at()의 out_of_range 예외 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	try
	{
		cout<< v.at(0) <<endl;
		cout<< v.at(3) <<endl;
		cout<< v.at(6) <<endl; //throw out_of_range 예외 
		
	}
	catch(out_of_range &e)
	{
		cout<< e.what() <<endl;
	}
	
	return 0;
	
}
#endif/* S15 */






#ifdef S16

//vector의 assign()
int main()
{
	vector<int> v(5, 1); //초기값 1의 5개의 원소를 갖는 컨테이너 생성
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	v.assign(5, 2); //5개의 원소값을 2로 할당
	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl; 
	
	return 0;
 } 
#endif /* S16 */







#ifdef S17

//vector의 begin()과 end()
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
		
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl; 	 	
	
	return 0;
} 
#endif /* S17 */







#ifdef S18

//vector 반복자의 연산 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin(); //시작 원소 10을 가리킨다.
	cout<< *iter <<endl;
	
	iter += 2; //+2인 위치의 원소(30)을 가리킨다.
	cout<< *iter <<endl;
	
	iter -= 1; //-1인 위치의 원소(20)을 가리킨다.
	cout<< *iter <<endl;
	
	return 0;
} 
#endif /* S18 */






#ifdef S19

//일반 반복자와 상수 반복자
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	
	vector<int>::iterator iter = v.begin(); //일반 반복자가 시작 원소 10을 가리킨다. 
	vector<int>::const_iterator citer = v.begin(); //상수 반복자가 시작 원소 10을 가리킨다. 
	
	cout<< *iter <<endl; //가리키는 원소의 참조
	cout<< *citer <<endl; //가리키는 원소의 상수 참조
	
	cout<< *++iter <<endl; //다음 원소로 이동한 원소의 참조
	cout<< *++citer <<endl; //다음 원소로 이동한 원소의 상수 참조 
	
	*iter = 100; //일반 반복자는 가리키는 원소를 변경할 수 있음 
//	*citer = 100; //상수 반복자는 가리키는 원소를 변경할 수 없음 
	
} 
#endif /* S19 */







#ifdef S20

//const와 반복자 
int main()
{
	vector<int> v;
	int arr[5] = {10, 20, 30 ,40 ,50};
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin();
	int* p = arr;
	cout<< *iter <<", "<< *p << endl; //iter는 p처럼 동작 
	
	vector<int>::const_iterator citer = v.begin();
	const int* cp = arr;
	cout<< *citer <<", "<< *cp <<endl; //citer는 cp처럼 동작
	
	const vector<int>::iterator iter_const = v.begin();
	int* const p_const = arr; //iter_const는 p_const처럼 동작
	cout<< *iter_const <<", "<< *p_const <<endl;
	
	const vector<int>::const_iterator citer_const = v.begin();
	const int* const cp_const = arr; //citer_const는 cp_const처럼 동작 
	cout<< *citer_const <<", "<< *cp_const <<endl;
	
	return 0; 
}
#endif /* S20 */







#ifdef S21

//iterator와 reverse_iterator
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter; //정방향 반복자
	vector<int>::reverse_iterator riter; //역방향 반복자
	
	for(iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;
	
	
	for(riter = v.rbegin(); riter != v.rend(); ++riter)
	{
		cout<< *riter << " ";
	} 
	cout<<endl;
	
	return 0;
} 
#endif /* S21 */







#ifdef S22

//insert() 멤버 함수의 사용
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin() + 2;
	vector<int>::iterator iter2;
	
	iter2 = v.insert(iter, 100); //iter가 가리키는 위치에 정수 100을 삽입
	                              //iter2는 삽입한 정수를 가리키는 반복자 

	for(iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;
	cout<<"iter2: "<< *iter2 <<endl;
	
	return 0;
}  
#endif /* S22 */






#ifdef S23

//다른 버전의 insert() 멤버함수 
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin() + 2;
	
	v.insert(iter, 3, 100); //iter가 가리키는 위치에 정수 100을  3개 삽입
	 
	for(iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;



	vector<int> v2;

	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);
	
	iter = v2.begin()+1; 
	
	v2.insert(iter, v.begin(), v.end()); //iter가 가리키는 위치에 [v.begin(), v.end()) 구간의 원소를 삽입 
	 
	for(iter = v2.begin(); iter != v2.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;


	return 0;
}  
#endif /* S23 */







#ifdef S24

//erase()멤버 함수
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter;
	vector<int>::iterator iter2;
	
	for(iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	
	iter = v.begin()+2;
	iter = v.erase(iter); //iter가 가리키는 위치의 원소를 제거, iter2는 다음 원소 40
	
	for(iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;
	
	
	iter2 =v.erase(v.begin()+1, v.end()); //[v.begin()+1, v.end()) 구간의 원소를 제거, iter2는 다음 원소 v.end() 
	
	for(iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<< endl;

	
	return 0;

}   
#endif /* S24 */







#ifdef S25

//반복자로 동작하는 생성자와 assign() 멤버 함수
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int> v2(v.begin(), v.end()); //순차열 [v.begin(), v.end())로 v2를 초기화
	
	vector<int>::iterator iter;
	for(iter = v2.begin(); iter != v2.end(); ++iter)
	{
		cout<< *iter << " "; //v2 출력 
	}
	cout<<endl;
	
	
	vector<int> v3;
	v3.assign(v.begin(), v.end()); //v3에 순차열 [v.begin(), v.end())을 할당
	for(iter = v3.begin(); iter != v3.end(); ++iter)
	{
		cout<<*iter<<" "; //v3 출력 
	}
	cout<<endl;
	
	return 0; 
	
} 
#endif /* S25 */






#ifdef S26

//vector와 vector 비교
int main()
{
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	vector<int> v2;
	
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(50);
	
	if (v1 == v2) //v1과 v2의 모든 원소가 같다면 true or false 
	{
		cout<< "v1 == v2" <<endl;	
	}
	
	if (v1 != v2) //v1과 v2의 모든 원소가 같다면 false or ture
	{
		cout<< "v1 != v2"<<endl;
	}
	
	if (v1 < v2) //v1과 v2의 순차열의 원소를 하나씩 순서대로 비교하여 v2의 원소가 크다면 ture or false 
	{
		cout<< "v1 < v2"<<endl;
	}
	
	
	return 0; 
	
}  
#endif /* S26 */
