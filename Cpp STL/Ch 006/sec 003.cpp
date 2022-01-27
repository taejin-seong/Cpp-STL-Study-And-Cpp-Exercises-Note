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

//list�� push_back, push_front, �ݺ���
int main()
{
	list<int> lt;
	
	lt.push_back(10); //���ʿ� �߰�
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
	
	
	lt.push_front(100); //���ʿ� �߰�
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

//list�� insert()�� erase()
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
	
	
	iter2 = lt.erase(iter); //iter(30)�� ���Ҹ� ����
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<' ';
	}
	cout<<endl;
	cout<< "iter2: "<<*iter2<<endl;
	
	
	iter = iter2;
	
	iter2 = lt.insert(iter, 300); //iter2(40)�� ����Ű�� ��ġ�� 30�� ����
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<' ';
	}
	cout<<endl;
	cout<< "iter2: "<<*iter2<<endl;
	 
	
 } 
#endif /* S2 */






#ifdef S3

//list�� vector�� insert()
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
	++viter; //20���Ҹ� ����Ŵ
		
	list<int>::iterator liter = lt.begin() ;
	++liter; //20���Ҹ� ����Ŵ
	
	viter = v.insert(viter, 600); //v�� �� ��° ��ҷ� ����
	liter = lt.insert(liter, 600); //lt�� �� ��° ��ҷ� ����
	
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

//list�� remove()
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
	
	lt.remove(10); //10������ ��带 ��� ����
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0; 
} 
#endif /* S4 */







#ifdef S5

//list�� remove_if()
bool Predicate(int n) //���� ������
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
	
	lt.remove_if(Predicate); //�����ڰ� ���� ��� ���Ҹ� ����

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;
	
	return 0; 
	
}
#endif /* S5 */






#ifdef S6

//list�� splice()
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
	++iter; // 30 ������ ��ġ�� ����Ŵ
	
	lt1.splice(iter ,lt2); //iter�� ����Ű�� ��ġ�� lt2�� ��� ���Ҹ� �߶� ����
	
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

//list�� splice() �ٸ� ����
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
	++iter1; //30 ������ ��ġ�� ����Ŵ
	
	iter2 = lt2.begin();
	++iter2; //200 ������ ��ġ�� ����Ŵ 
	
	lt1.splice(iter1 ,lt2, iter2); //iter1�� ����Ű�� ��ġ�� iter2�� ����Ű�� ��ġ�� lt2�� ���Ҹ� �߶� ���� 	
	
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
	
	
	
	
	
	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end()); //lt1.end()�� ����Ű�� ��ġ�� ������ (lt2.begin(), lt2.end())�� �߶����
	
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

//list�� reverse()
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
	
	lt.reverse(); //��� ������ �������� �ݴ�� ������ 

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;

} 
#endif /* S8 */






#ifdef S9

//list�� unique()
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
	
	lt.unique(); //������ ���� ���Ҹ� �����ϰ� ���� 

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;

} 
#endif /* S9 */






#ifdef S10

//list�� ������ ���� unique()
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

//list�� sort()
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
	
	lt.sort(); //�������� (less) ���� 

	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	return 0;
}  
#endif /* S11 */







#ifdef S12

//list�� ������ ���� sort()
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
	
	
	
	lt.sort(greater<int>()); //������ greater�� ����Ͽ� �������� ���� 
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<<endl;
	
	
	
	lt.sort(less<int>()); //������ less�� ����Ͽ� �ٽ� �������� ����
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl; 
	
	
	
	lt.sort(Greater()); //����� ���� �����ڸ� ����Ͽ� �ٽ� �������� ���� 
	
	for(iter = lt.begin(); iter != lt.end(); ++iter)
	{
		cout<< *iter << " ";
	}
	cout<<endl; 
	
	
	return 0;
}  
#endif /* S12 */







#ifdef S13

//list�� merge()
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
	
	
	
	lt1.merge(lt2); //lt2�� lt1���� �պ� ����, ���� ������ less
	
	
	
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

//list�� merge()
int main()
{
	list<int> lt1;
	list<int> lt2;
	
	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(10);
	
	
	lt2.push_back(25); //lt1�� lt2�� ���� ����� �ٸ��Ƿ� ������ merge() ��� �Լ��� ����ؼ� �պ��ؾ��� 
	lt2.push_back(35);
	lt2.push_back(60);
	
//	lt2.push_back(60); //lt1�� lt2�� ���� ����� ����  
//	lt2.push_back(35); //greater ������ (>����) ���� ���� ��� 
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
	
	
	
	lt1.merge(lt2, greater<int>()); //lt2�� lt1���� �պ� ���� 
	                                //�� list�� ���� ������ greater(>����)��� ���� predicate�� ���� 
	
	
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
