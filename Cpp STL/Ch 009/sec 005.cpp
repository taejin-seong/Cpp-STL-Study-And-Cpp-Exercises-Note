#include <iostream>
#include <functional>  


using namespace std;



//#define S1
#define S2


 


#ifdef 	S1

//bind1st 바인더 
int main()
{
	//bind1st: 이항 함수자의 첫 번째 인자를 고정하여 단항 함수자로 변환
	
	
	//less의 첫 인자를 10으로 고정한 단항 조건자 binder 생성 
	binder1st<less<int> > binder = bind1st(less<int>(), 10);
	
	//binder는 첫 번째 인자를 10으로 고정한 less 
	cout<< binder(5) <<" : "<<less<int>()(10, 5)<<endl;
	//두 문장이 같음 
	cout<< binder(10) <<" : "<<less<int>()(10, 10)<<endl;
	//두 문장이 같음 
	cout<< binder(20) <<" : "<<less<int>()(10, 20)<<endl;
	
	cout<< "=========위와 같음========="<<endl; 

	//임시 객체 사용 
	cout<< bind1st(less<int>(), 10)(5) <<" : "<<less<int>()(10, 5)<<endl;
	cout<< bind1st(less<int>(), 10)(10) <<" : "<<less<int>()(10, 10)<<endl;
	cout<< bind1st(less<int>(), 10)(20) <<" : "<<less<int>()(10, 20)<<endl;
	
	return 0;
 
 } 
#endif /* S1 */







#ifdef 	S2

//bind2nd 바인더 
int main()
{
	//bind2nd: 이항 함수자의 두 번째 인자를 고정하여 단항 함수자로 변환
	
	
	//less의 두 번째 인자를 10으로 고정한 단항 조건자 binder 생성 	
	binder2nd<less<int> > binder = bind2nd(less<int>(), 10);
	
	//binder는 두 번째 인자를 10으로 고정한 less 	
	cout<< binder(5) <<" : "<<less<int>()(5, 10)<<endl;
	//두 문장이 같음 	
	cout<< binder(10) <<" : "<<less<int>()(10, 10)<<endl;
	//두 문장이 같음 
	cout<< binder(20) <<" : "<<less<int>()(20, 10)<<endl;
	
	cout<< "=========위와 같음========="<<endl; 

	//임시 객체 사용 
	cout<< bind2nd(less<int>(), 10)(5) <<" : "<<less<int>()(5, 10)<<endl;
	cout<< bind2nd(less<int>(), 10)(10) <<" : "<<less<int>()(10, 10)<<endl;
	cout<< bind2nd(less<int>(), 10)(20) <<" : "<<less<int>()(20, 10)<<endl;
	
	return 0;
 
 } 
#endif /* S2 */
