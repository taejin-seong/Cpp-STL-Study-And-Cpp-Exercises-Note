 #include <iostream>
 #include <list>
 #include <vector>
 

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
#define S14

 


#ifdef S1

//list의 push_back, push_front, 반복자
int main()
{
	list<int> lt;
	
	lt.push_back(10); //뒤쪽에 추가
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	
	list<int>::iterator iter;
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	
	lt.push_front(100); //앞쪽에 추가
	lt.push_front(200);
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	} 
	cout<<endl;
	
	return 0;
	
} 
#endif /* S1 */






#ifdef S2

//list의 insert()와 erase()
int main()
{
	list<int> lt;
	
	lt.push_back(10); 
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	
	list<int>::iterator iter = lt.begin();
	list<int>::iterator iter2;
	++iter;
	++iter;
	
	
	iter2 = lt.erase(iter); //iter(30)의 원소를 제거
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<' ';
	}
	cout<<endl;
	cout<< "iter2: "<<*iter2<<endl;
	
	
	iter = iter2;
	
	iter2 = lt.insert(iter, 300); //iter2(40)이 가리키는 위치에 30을 삽입
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<' ';
	}
	cout<<endl;
	cout<< "iter2: "<<*iter2<<endl;
	 
	
 } 
#endif /* S2 */






#ifdef S3

//list와 vector의 insert()
int main()
{
	vector<int> v;
	list<int> lt;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	
	vector<int>::iterator viter = v.begin();
	++viter; //20원소를 가리킴
		
	list<int>::iterator liter = lt.begin() ;
	++liter; //20원소를 가리킴
	
	viter = v.insert(viter, 600); //v의 두 번째 요소로 삽입
	liter = lt.insert(liter, 600); //lt의 두 번째 요소로 삽입
	
	cout<< "vector: "<< *viter <<endl;
	cout<< "list: "<< *liter <<endl;
	
	cout<<"vector: ";
	for(viter = v.begin(); viter != v.end(); ++viter)
	{
		cout<< *viter <<" ";
	}
	cout<<endl;
	
	cout<<"list:  ";
	for(liter = lt.begin(); liter != lt.end(); ++liter)
	{
		cout<< *liter <<" ";
	}
	cout<<endl;
	
	return 0;
	
} 
#endif /* S3 */






#ifdef S4

//list의 remove()
int main()
{
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(10);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);
	lt.push_back(10);
	
	list<int>::iterator iter;
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	
	lt.remove(10); //10원소의 노드를 모두 제거
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0; 
} 
#endif /* S4 */







#ifdef S5

//list의 remove_if()
bool Predicate(int n) //단항 조건자
{
	return 10 <= n && n <= 30;
} 

int main()
{
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);
	
	list<int>::iterator iter;
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	lt.remove_if(Predicate); //조건자가 참인 모든 원소를 제거

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;
	
	return 0; 
	
}
#endif /* S5 */






#ifdef S6

//list의 splice()
int main()
{
	list<int> lt1;
	list<int> lt2;
	
	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);
	
	lt2.push_back(100);
	lt2.push_back(200);
	lt2.push_back(300);
	lt2.push_back(400);
	lt2.push_back(500);
	
	list<int>::iterator iter;
	cout<<"lt1: ";
	for(iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	cout<<"lt2: ";
	for(iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl<<"============================="<<endl;
	
	iter = lt1.begin();
	++iter;
	++iter; // 30 원소의 위치를 가리킴
	
	lt1.splice(iter ,lt2); //iter가 가리키는 위치에 lt2의 모든 원소를 잘라 붙임
	
	cout<<"lt1: ";
		for(iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
		
	cout<<"lt2: ";
	for(iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	return 0;

}
#endif /* S6 */







#ifdef S7

//list의 splice() 다른 버전
int main()
{
	list<int> lt1;
	list<int> lt2;
	
	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);
	
	lt2.push_back(100);
	lt2.push_back(200);
	lt2.push_back(300);
	lt2.push_back(400);
	lt2.push_back(500);
	
	list<int>::iterator iter1;
	list<int>::iterator iter2;
	
	
	
	cout<<"lt1: ";
	for(iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
	{
		cout<< *iter1 <<" ";
	}
	cout<<endl;
	
	cout<<"lt2: ";
	for(iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
	{
		cout<< *iter2 << " ";
	}
	cout<<endl<<"============================="<<endl;
	
	
	
	
	
	iter1 = lt1.begin();
	++iter1;
	++iter1; //30 원소의 위치를 가리킴
	
	iter2 = lt2.begin();
	++iter2; //200 원소의 위치를 가리킴 
	
	lt1.splice(iter1 ,lt2, iter2); //iter1이 가리키는 위치에 iter2가 가리키는 위치의 lt2의 원소를 잘라 붙임 	
	
	cout<<"lt1: ";
	for(iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
	{
		cout<< *iter1 <<" ";
	}
	cout<<endl;
	
		
	cout<<"lt2: ";
	for(iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
	{
		cout<< *iter2 << " ";
	}
	cout<<endl<<"============================="<<endl;
	
	
	
	
	
	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end()); //lt1.end()가 가리키는 위치에 순차열 (lt2.begin(), lt2.end())를 잘라붙임
	
	cout<< "lt1: ";
	for(iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
	{
		cout<< *iter1 << " ";
	}
	cout<<endl;
	
	cout<<"lt2: ";
	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
	{
		cout<< *iter2 <<" ";
	}
	cout<<endl;

	
	return 0;

}
 
#endif /* S7 */







#ifdef S8

//list의 reverse()
int main()
{
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	
	list<int>::iterator iter;
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	lt.reverse(); //모든 원소의 순차열을 반대로 뒤집음 

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;

} 
#endif /* S8 */






#ifdef S9

//list의 unique()
int main()
{
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);
	
	
	list<int>::iterator iter;
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	lt.unique(); //인접한 같은 원소를 유일하게 만듬 

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;

} 
#endif /* S9 */






#ifdef S10

//list의 조건자 버전 unique()
bool Predicate(int first, int second)
{
	return second-first <= 0;
}
 
int main()
{
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);
	
	
	list<int>::iterator iter;
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	lt.unique(Predicate);

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;
} 
#endif /* S10 */






#ifdef S11

//list의 sort()
int main()
{
	list<int> lt;
	
	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	
	
	list<int>::iterator iter;
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	lt.sort(); //오름차순 (less) 정렬 

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;
}  
#endif /* S11 */







#ifdef S12

//list의 조건자 버전 sort()
struct Greater
{
	bool operator() (int left, int right) const
	{
		return left > right;
	}
}; 

int main()
{
	list<int> lt;
	
	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	lt.push_back(40);
	
	
	list<int>::iterator iter;
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	
	
	lt.sort(greater<int>()); //조건자 greater를 사용하여 내림차순 정렬 
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	
	
	lt.sort(less<int>()); //조건자 less를 사용하여 다시 오름차순 정렬
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl; 
	
	
	
	lt.sort(Greater()); //사용자 정의 조건자를 사용하여 다시 오름차순 정렬 
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl; 
	
	
	return 0;
}  
#endif /* S12 */







#ifdef S13

//list의 merge()
int main()
{
	list<int> lt1;
	list<int> lt2;
	
	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);
	
	
	lt2.push_back(25);
	lt2.push_back(35);
	lt2.push_back(60);
	
	
	list<int>::iterator iter;
	cout<<"lt1: ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	cout<<"iter2: ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		cout<< *iter << " ";
	}	
	cout<<endl<<"============================="<<endl;
	
	
	
	lt1.merge(lt2); //lt2를 lt1으로 합병 정렬, 정렬 기준은 less
	
	
	
	cout<< "lt1: ";
	for(iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	cout<< "lt2: ";
	for(iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	 
	 
	return 0;
}   
#endif /* S13 */







#ifdef S14

//list의 merge()
int main()
{
	list<int> lt1;
	list<int> lt2;
	
	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(10);
	
	
	lt2.push_back(25); //lt1과 lt2가 정렬 방식이 다르므로 조건자 merge() 멤버 함수를 사용해서 합병해야함 
	lt2.push_back(35);
	lt2.push_back(60);
	
//	lt2.push_back(60); //lt1과 lt2는 정렬 방식이 같음  
//	lt2.push_back(35); //greater 조건자 (>연산) 정렬 기준 사용 
//	lt2.push_back(25);
	
	
	list<int>::iterator iter;
	cout<<"lt1: ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl;
	
	cout<<"iter2: ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		cout<< *iter << " ";
	}	
	cout<<endl<<"============================="<<endl;
	
	
	
	lt1.merge(lt2, greater<int>()); //lt2를 lt1으로 합병 정렬 
	                                //두 list의 정렬 기준이 greater(>연산)라는 것을 predicate로 지정 
	
	
	cout<< "lt1: ";
	for(iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	cout<< "lt2: ";
	for(iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	 
	 
	return 0;
}   
#endif /* S14 */
