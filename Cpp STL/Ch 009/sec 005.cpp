#include <iostream>
#include <functional>  


using namespace std;



//#define S1
#define S2


 


#ifdef 	S1

//bind1st ���δ� 
int main()
{
	//bind1st: ���� �Լ����� ù ��° ���ڸ� �����Ͽ� ���� �Լ��ڷ� ��ȯ
	
	
	//less�� ù ���ڸ� 10���� ������ ���� ������ binder ���� 
	binder1st<less<int> > binder = bind1st(less<int>(), 10);
	
	//binder�� ù ��° ���ڸ� 10���� ������ less 
	cout<< binder(5) <<" : "<<less<int>()(10, 5)<<endl;
	//�� ������ ���� 
	cout<< binder(10) <<" : "<<less<int>()(10, 10)<<endl;
	//�� ������ ���� 
	cout<< binder(20) <<" : "<<less<int>()(10, 20)<<endl;
	
	cout<< "=========���� ����========="<<endl; 

	//�ӽ� ��ü ��� 
	cout<< bind1st(less<int>(), 10)(5) <<" : "<<less<int>()(10, 5)<<endl;
	cout<< bind1st(less<int>(), 10)(10) <<" : "<<less<int>()(10, 10)<<endl;
	cout<< bind1st(less<int>(), 10)(20) <<" : "<<less<int>()(10, 20)<<endl;
	
	return 0;
 
 } 
#endif /* S1 */







#ifdef 	S2

//bind2nd ���δ� 
int main()
{
	//bind2nd: ���� �Լ����� �� ��° ���ڸ� �����Ͽ� ���� �Լ��ڷ� ��ȯ
	
	
	//less�� �� ��° ���ڸ� 10���� ������ ���� ������ binder ���� 	
	binder2nd<less<int> > binder = bind2nd(less<int>(), 10);
	
	//binder�� �� ��° ���ڸ� 10���� ������ less 	
	cout<< binder(5) <<" : "<<less<int>()(5, 10)<<endl;
	//�� ������ ���� 	
	cout<< binder(10) <<" : "<<less<int>()(10, 10)<<endl;
	//�� ������ ���� 
	cout<< binder(20) <<" : "<<less<int>()(20, 10)<<endl;
	
	cout<< "=========���� ����========="<<endl; 

	//�ӽ� ��ü ��� 
	cout<< bind2nd(less<int>(), 10)(5) <<" : "<<less<int>()(5, 10)<<endl;
	cout<< bind2nd(less<int>(), 10)(10) <<" : "<<less<int>()(10, 10)<<endl;
	cout<< bind2nd(less<int>(), 10)(20) <<" : "<<less<int>()(20, 10)<<endl;
	
	return 0;
 
 } 
#endif /* S2 */
