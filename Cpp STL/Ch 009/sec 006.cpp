#include <iostream>
#include <functional>  


using namespace std;



//#define S1
#define S2


 


#ifdef 	S1

//not2 ������ 
int main()
{
	
	less<int> oLess;
	binary_negate<less<int> > negate = not2(less<int>());
	
	cout<< negate(5, 10)<< " : "<<not2(oLess)(5, 10)<< " : "<< not2(less<int>())(5, 10) <<endl; //��� ���� 
	cout<< negate(10, 10)<< " : "<<not2(oLess)(10, 10)<< " : "<< not2(less<int>())(10, 10) <<endl; //��� ���� 
	cout<< negate(20, 10)<< " : "<<not2(oLess)(20, 10)<< " : "<< not2(less<int>())(20, 10) <<endl; //��� ���� 
	
	return 0;
 
 } 
#endif /* S1 */







#ifdef 	S2

//not1 ������ 
int main()
{
	binder2nd<less<int> > binder = bind2nd(less<int>(), 10);
	unary_negate<binder2nd<less<int> > > negate = not1(binder); 
	
	cout<< negate(5)<< " : "<<not1(binder)(5)<< " : "<< not1(bind2nd(less<int>(),10))(5) <<endl; //��� ���� 
	cout<< negate(10)<< " : "<<not1(binder)(10)<< " : "<< not1(bind2nd(less<int>(),10))(10) <<endl; //��� ���� 
	cout<< negate(20)<< " : "<<not1(binder)(20)<< " : "<< not1(bind2nd(less<int>(),10))(10) <<endl; //��� ���� 
	
	return 0;
 
 } 
#endif /* S2 */
