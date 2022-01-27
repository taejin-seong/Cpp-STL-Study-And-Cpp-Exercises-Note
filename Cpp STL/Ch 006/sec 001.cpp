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

//vector�� push_back()
int main()
{
	vector<int> v; //int Ÿ���� ���Ҹ� �����ϴ� �����̳� v�� ���� 
	
	v.push_back(10); //v.push_back(x): v�� x�� �߰� 
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	for (int i = 0; i < v.size(); ++i) //v.size(): v�� ������ ���� ��ȯ 
	{
		cout<< v[i] <<endl; //v[i]: v�� i��° ���Ҹ� ���� 
	}
	
	return 0;
	
 } 
#endif /* S1 */







#ifdef S2

//vector�� size_type 
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

//vector�� size(), capacity(), max_size() 
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
	
	cout<< v.size() <<endl;     //size(): ���� ������ ����  
	cout<< v.capacity() <<endl; //capacity(): ���� �Ҵ�� �޸� ������ ũ��  *vector���� �����ϰ� ������ ����Լ� 
	cout<< v.max_size() <<endl; //max_size(): �����̳ʰ� ���� �� �ִ� �ִ� ������ ����  
	
	return 0;
		
 } 
#endif /* S3 */ 






#ifdef S4

//vector�� capacity()
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

//vector�� reserve()
int main()
{
	vector<int> v;
	
	v.reserve(8); //v.reserve(n): n���� ���Ҹ� ������ �޸� ����(capacity)�� �̸� �Ҵ�
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

//vector�� ������
int main()
{
	vector<int> v1(5); //0���� �ʱ�ȭ�� size�� 5�� �����̳�
	
	v1.push_back(10); //10�߰� 
	v1.push_back(20); 
	v1.push_back(30); 
	v1.push_back(40); 
	v1.push_back(50); 
	
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl;
	
	
	
	vector<int> v2(5); //0���� �ʱ�ȭ�� size�� 5�� �����̳� 
	
	v2[0] = 10; //0���� 10���� ���� 
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

//vector �������� �ʱ갪 ����
int main()
{
	vector<int> v1(5); //�⺻�� 0���� �ʱ�ȭ�� size�� 5�� �����̳�
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
	{
		cout<< v1[i] <<" ";
	}
	cout<<endl; 
	
	
	vector<int> v2(5, 0); //������ 0���� �ʱ�ȭ�� size�� 5�� �����̳�
	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
	{
		cout<< v2[i] <<" ";
	} 
	cout<<endl;
	
	vector<int> v3(5, 10); //������ 10���� �ʱ�ȭ�� size�� 5�� �����̳�
	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
	{
		cout<< v3[i] <<" ";
	} 
	cout<<endl;
	
	return 0;
	
} 
#endif /* S7 */






#ifdef S8

//vector�� resize()
int main()
{
	vector<int> v(5); //�⺻�� 0���� �ʱ�ȭ�� size�� 5�� �����̳� 
	
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



	v.resize(10); //�⺻�� 0���� �ʱ�ȭ�� size�� 10�� �����̳ʷ� Ȯ�� *�������� Ȯ��� 
	 
	for(vector<int>::size_type i = 0; i <v.size(); ++i) 
	{
		cout<< v[i] << " ";
	}
	cout << endl;
	cout << "size: "<< v.size() <<" capacity: "<< v.capacity() << endl;

	
	
	
	v.resize(5); //size�� 5�� �����̳ʷ� ��� capacity�� ��ȭ����
	
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

//vector�� clear()�� empty()
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

	v.clear(); //v�� ����. *�޸� ������ ���Ű� ���� ���� ~ ��ȿ���� 
	
	if(v.empty()) //v�� ����°�? 
	{
		cout<< "v�� ���Ұ� �����ϴ�."<<endl;
	} 
	
	return 0; 
	
 } 
#endif /* S9 */






#ifdef S10

//swap�� ����� �Ҵ� �޸� ����
int main()
{
	vector<int> v(5);
	cout<<"size: "<<v.size()<<" capacity: "<<v.capacity()<< endl;
	
	vector<int>().swap(v); //�⺻ �����ڷ� ���� vector �����̳ʿ� v �����̳ʸ� swap�Ѵ�.
	cout<<"size: "<<v.size() <<" capacity: "<<v.capacity() <<endl;
	
	return 0; 
 } 
#endif /* S10 */







#ifdef S11

//vector�� swap()
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
	
	
	v1.swap(v2); //v1�� v2�� swap�մϴ�.
	for(vector<int>::size_type i = 0; i <v1.size(); i++)
	{
		cout<< v1[i] <<", "<< v2[i] <<endl;
	}
	cout<<endl;
	 
	return 0;
 } 
#endif /* S11 */







#ifdef S12

//vector�� front�� back()
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
	
	cout<< v[0] <<", "<<v.front() <<endl; //ù��° ����
	cout<< v[4] <<", "<<v.back() <<endl; //������ ���� 
	
	return 0;
	
 }  
#endif /* S12 */






#ifdef S13

//vector�� front()�� back() ����
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
	
	
	v.front() = 100; //ù���� ���Ҹ� 100����
	v.back() = 500; //������ ���Ҹ� 500���� 
	
	
	for(vector<int>::size_type i = 0; i < v.size();  ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl; 
	
	return 0;
} 
#endif /* S13 */







#ifdef S14

//vector�� []�����ڿ� at()����Լ� 
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
	
	
	v[0] = 100; //���� ���˾��� 0 �ε��� ������ ����
	v[4] = 500;  	
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] <<" ";
	}
	cout<<endl;
	
	
	v.at(0) = 1000; //���� �����ִ� 0 �ε��� ������ ����
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

//at()�� out_of_range ���� 
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
		cout<< v.at(6) <<endl; //throw out_of_range ���� 
		
	}
	catch(out_of_range &e)
	{
		cout<< e.what() <<endl;
	}
	
	return 0;
	
}
#endif/* S15 */






#ifdef S16

//vector�� assign()
int main()
{
	vector<int> v(5, 1); //�ʱⰪ 1�� 5���� ���Ҹ� ���� �����̳� ����
	
	for(vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<< v[i] << " ";
	}
	cout<<endl;
	
	
	
	v.assign(5, 2); //5���� ���Ұ��� 2�� �Ҵ�
	
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl; 
	
	return 0;
 } 
#endif /* S16 */







#ifdef S17

//vector�� begin()�� end()
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

//vector �ݺ����� ���� 
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin(); //���� ���� 10�� ����Ų��.
	cout<< *iter <<endl;
	
	iter += 2; //+2�� ��ġ�� ����(30)�� ����Ų��.
	cout<< *iter <<endl;
	
	iter -= 1; //-1�� ��ġ�� ����(20)�� ����Ų��.
	cout<< *iter <<endl;
	
	return 0;
} 
#endif /* S18 */






#ifdef S19

//�Ϲ� �ݺ��ڿ� ��� �ݺ���
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	
	vector<int>::iterator iter = v.begin(); //�Ϲ� �ݺ��ڰ� ���� ���� 10�� ����Ų��. 
	vector<int>::const_iterator citer = v.begin(); //��� �ݺ��ڰ� ���� ���� 10�� ����Ų��. 
	
	cout<< *iter <<endl; //����Ű�� ������ ����
	cout<< *citer <<endl; //����Ű�� ������ ��� ����
	
	cout<< *++iter <<endl; //���� ���ҷ� �̵��� ������ ����
	cout<< *++citer <<endl; //���� ���ҷ� �̵��� ������ ��� ���� 
	
	*iter = 100; //�Ϲ� �ݺ��ڴ� ����Ű�� ���Ҹ� ������ �� ���� 
//	*citer = 100; //��� �ݺ��ڴ� ����Ű�� ���Ҹ� ������ �� ���� 
	
} 
#endif /* S19 */







#ifdef S20

//const�� �ݺ��� 
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
	cout<< *iter <<", "<< *p << endl; //iter�� pó�� ���� 
	
	vector<int>::const_iterator citer = v.begin();
	const int* cp = arr;
	cout<< *citer <<", "<< *cp <<endl; //citer�� cpó�� ����
	
	const vector<int>::iterator iter_const = v.begin();
	int* const p_const = arr; //iter_const�� p_constó�� ����
	cout<< *iter_const <<", "<< *p_const <<endl;
	
	const vector<int>::const_iterator citer_const = v.begin();
	const int* const cp_const = arr; //citer_const�� cp_constó�� ���� 
	cout<< *citer_const <<", "<< *cp_const <<endl;
	
	return 0; 
}
#endif /* S20 */







#ifdef S21

//iterator�� reverse_iterator
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter; //������ �ݺ���
	vector<int>::reverse_iterator riter; //������ �ݺ���
	
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

//insert() ��� �Լ��� ���
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
	
	iter2 = v.insert(iter, 100); //iter�� ����Ű�� ��ġ�� ���� 100�� ����
	                              //iter2�� ������ ������ ����Ű�� �ݺ��� 

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

//�ٸ� ������ insert() ����Լ� 
int main()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter = v.begin() + 2;
	
	v.insert(iter, 3, 100); //iter�� ����Ű�� ��ġ�� ���� 100��  3�� ����
	 
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
	
	v2.insert(iter, v.begin(), v.end()); //iter�� ����Ű�� ��ġ�� [v.begin(), v.end()) ������ ���Ҹ� ���� 
	 
	for(iter = v2.begin(); iter != v2.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;


	return 0;
}  
#endif /* S23 */







#ifdef S24

//erase()��� �Լ�
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
	iter = v.erase(iter); //iter�� ����Ű�� ��ġ�� ���Ҹ� ����, iter2�� ���� ���� 40
	
	for(iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter << " ";
	} 
	cout<<endl;
	
	
	iter2 =v.erase(v.begin()+1, v.end()); //[v.begin()+1, v.end()) ������ ���Ҹ� ����, iter2�� ���� ���� v.end() 
	
	for(iter = v.begin(); iter != v.end(); ++iter)
	{
		cout<< *iter <<" ";
	}
	cout<< endl;

	
	return 0;

}   
#endif /* S24 */







#ifdef S25

//�ݺ��ڷ� �����ϴ� �����ڿ� assign() ��� �Լ�
int main()
{
	vector<int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int> v2(v.begin(), v.end()); //������ [v.begin(), v.end())�� v2�� �ʱ�ȭ
	
	vector<int>::iterator iter;
	for(iter = v2.begin(); iter != v2.end(); ++iter)
	{
		cout<< *iter << " "; //v2 ��� 
	}
	cout<<endl;
	
	
	vector<int> v3;
	v3.assign(v.begin(), v.end()); //v3�� ������ [v.begin(), v.end())�� �Ҵ�
	for(iter = v3.begin(); iter != v3.end(); ++iter)
	{
		cout<<*iter<<" "; //v3 ��� 
	}
	cout<<endl;
	
	return 0; 
	
} 
#endif /* S25 */






#ifdef S26

//vector�� vector ��
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
	
	if (v1 == v2) //v1�� v2�� ��� ���Ұ� ���ٸ� true or false 
	{
		cout<< "v1 == v2" <<endl;	
	}
	
	if (v1 != v2) //v1�� v2�� ��� ���Ұ� ���ٸ� false or ture
	{
		cout<< "v1 != v2"<<endl;
	}
	
	if (v1 < v2) //v1�� v2�� �������� ���Ҹ� �ϳ��� ������� ���Ͽ� v2�� ���Ұ� ũ�ٸ� ture or false 
	{
		cout<< "v1 < v2"<<endl;
	}
	
	
	return 0; 
	
}  
#endif /* S26 */
