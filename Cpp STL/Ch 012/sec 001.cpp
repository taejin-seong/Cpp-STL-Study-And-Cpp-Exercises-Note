#include <iostream>
#include <string>


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
#define S11



#ifdef S1

//string ������ 
int main()
{
	string t("Hello!"); //�ӽ� ���ڿ� 
	const char* p1 = "Hello!";
	const char* p2 = p1 + 6;
	
	string s1;
	string s2("Hello!");
	string s3("Hello!", 2);
	string s4(5, 'H');
	string s5(t.begin(), t.end()); //�ݺ��� �� 
	string s6(p1, p2); //������ �� 
	
	//s:string��ü, sz:'\0' ���ڿ�, c:����, n:����, iter:�ݺ���, p:������ 
	cout<<"s1() : "              << s1 <<endl;
	cout<<"s2(sz) : "            << s2 <<endl;
	cout<<"s3(sz, n) : "         << s3 <<endl;
	cout<<"s4(n, c) : "          << s4 <<endl;
	cout<<"s5(iter1, iter2) : "  << s5 <<endl;
	cout<<"s6(p1, p2) : "        << s6 <<endl;
	
	return 0;
	
 } 
#endif /* S1 */








#ifdef S2

//append(), +=, push_back()
int main()
{
	string s1("He");
	string s2("He");
	string s3("He");
	string s4("He");
	string s5("He");
	string s6("He");
	string s7("He");
	string s8("He");
	string s9("He");
	string s10("He");
	
	string t("llo!");
	const char* p1 = "llo!";
	const char* p2 = p1 + 4;
	
	s1.append(t);
	s2.append(t, 0, 4);
	s3.append("llo!");
	s4.append("llo", 4);
	s5.append(t.begin(), t.end());
	s6.append(p1, p2);
	s7.append(5, 'H');
	s8 += t;
	s9 += "llo!";
	
	for(string::iterator iter = t.begin(); iter != t.end(); ++iter)
	{
		s10.push_back(*iter);
	}
	
	//s:string ��ü, sz:'\0'���ڿ�, c:����, off:������ġ, n:����, iter:�ݺ���, p:������
	cout<< "s1.append(s): "            <<s1<<endl;
	cout<< "s2.append(s, off, n): "    <<s2<<endl;
	cout<< "s3.append(sz): "           <<s3<<endl;
	cout<< "s4.append(sz, n): "        <<s4<<endl;
	cout<< "s5.append(iter1, iter2): " <<s5<<endl;
	cout<< "s6.append(p1, p2): "       <<s6<<endl;
	cout<< "s7.append(n, c): "         <<s7<<endl;
	cout<< "s8 += s: "                 <<s8<<endl;
	cout<< "s9 += sz: "                <<s9<<endl;
	cout<< "s10.push_back(c): "        <<s10<<endl;
	 
	
	return 0;
	
 } 
#endif /* S2 */









#ifdef S3

//=, append() ��� �Լ� 
int main()
{
	string t("Hello!");
	const char* p1 = "Hello!";
	const char* p2 = p1 + 6;
	
	string s1,s2,s3,s4,s5,s6,s7,s8,s9;
	
	s1.assign(t);
	s2.assign(t, 0, 6);
	s3.assign("Hello!");
	s4.assign("Hello!", 6);
	s5.assign(6, 'H');
	s6.assign(t.begin(), t.end());
	s7.assign(p1, p2);
	s8 = t;
	s9 = "Hello!";
	
	//s:string ��ü, sz:'\0'���ڿ�, c:����, off:������ġ, n:����, iter:�ݺ���, p:������
	cout<< "s1.assing(s) : "            <<s1<<endl;
	cout<< "s2.assing(s, off, n) : "    <<s2<<endl;
	cout<< "s3.assing(sz) : "           <<s3<<endl;
	cout<< "s4.assing(sz, n) : "        <<s4<<endl;
	cout<< "s5.assing(n, c) : "         <<s5<<endl;
	cout<< "s6.assing(iter1, iter2) : " <<s6<<endl;
	cout<< "s7.assing(p1, p2) : "       <<s7<<endl;
	cout<< "s8 = s : "                  <<s8<<endl;
	cout<< "s9 = sz : "                 <<s9<<endl;
	
	return 0;
	
 } 
#endif /* S3 */








#ifdef S4

//c_str(), data() ��� �Լ� 
int main()
{
	string s("Hello!");
	const char *sz;
	const char *buf;
	
	sz = s.c_str();
	buf = s.data();
	
	cout<< "'\\-0'���ڷ� ������ ���ڿ�(C-style) : "<< sz <<endl;
	cout<< "'\\-0'���� �������� ���� ���ڿ� �迭 : ";
	for(int i = 0; i < 6; ++i)
	{
		cout<< buf[i];
	}
	cout<<endl;
	
	return 0;
	
 } 
#endif /* S4 */








#ifdef S5

//compare() ��� �Լ� 
int main()
{
	string s1("ABCDE");
	string s2("AKABC");
	const char* sz = "AKABC";
	
	//s: string ��ü, sz:'\0'���ڿ�, off:���� ��ġ, n:���� 
	cout<< "s1.compare(s) : "                    << s1.compare(s2)             <<endl;
	cout<< "s1.compare(off, n, s) : "            << s1.compare(2, 3, s2)       <<endl;
	cout<< "s1.compare(off, n, s, off2, n2) : "  << s1.compare(0, 3, s2, 2, 3) <<endl;
	cout<< "s1.compare(sz) : "                   << s1.compare(sz)             <<endl;
	cout<< "s1.compare(off, n, sz) : "           << s1.compare(2, 3, sz)       <<endl;
	cout<< "s1.compare(off, n, sz, n2) : "       << s1.compare(0, 1, sz, 1)    <<endl;
	
	return 0;
	
 } 
#endif /* S5 */







#ifdef S6

//copy() ��� �Լ� 
int main()
{
	string s("Hello!");
	char buf[100];
	
	//������: copy()�� ���� '\0'���ڸ� �������� �ʴ´�.
	s.copy(buf, s.length()); //length()�� size()�� ����.
	buf[s.length()] = '\0';
	cout<< "��ü ���ڿ�[copy(buf, n)] : " << buf << endl;
	
	s.copy(buf, 4, 2);
	buf[4] = '\0';
	cout<< "�κ� ���ڿ�[copy(buf, n, off)] : "<< buf <<endl;
	
	return 0; 
	
 } 
#endif /* S6 */







#ifdef S7

//find(), rfind() ��� �Լ� 
int main()
{
	const char *sz = "\"Be careful in Uncle Randy's new car\", "
	"my sister told them. \"Wipe your feet before you get in it. "
	"Don't mess anything up. Don't get it dirty.\" "
	"I listened to her, and thought, "
	"as only a bachelor uncle can So I made things easy. "
	"while my sister was outlining the rules, "
	"I slowly and deliberately opened a can of soda, turned it over, "
	"and poured it on the cloth seats in the back of the convertible. ";
	
	
	string t("Randy");
	string s = sz;
	
	
	//s:string ��ü, sz:'\0'���ڿ�, c:����, off:������ġ, n:���� 
	cout<<s<<endl<<endl;
	cout<<"s.find(c) : "            <<s.find('I')                        <<endl;
	cout<<"s.find(c, off) : "       <<s.find('I', 250)                   <<endl;
	cout<<"s.find(sz) : "           <<s.find("poured it")                <<endl;
	cout<<"s.find(sz, off) : "      <<s.find("poured it", 0)             <<endl;
	cout<<"s.find(sz, off, n) : "   <<s.find("I listened to her", 0, 1)  <<endl;
	cout<<"s.find(c) : "            <<s.find(t, 0)                       <<endl;
	
	string::size_type pos = s.find("Not found");
	cout<< (int)pos << " : " <<(int)string::npos <<endl;
	
	pos = s.rfind('I');
	if(string::npos != pos)
	{
		cout<< "s.rfind(c) : " << pos <<endl;
	}
	
	return 0; 
 } 
#endif /* S7 */








#ifdef S8

//insert() ��� �Լ�
int main()
{
	string t("ABC");
	
	string s1("Hello!");
	string s2("Hello!");
	string s3("Hello!");
	string s4("Hello!");
	string s5("Hello!");
	string s6("Hello!");
	string s7("Hello!");
	string s8("Hello!");
	string s9("Hello!");
	
	s1.insert(1, "ABC");
	s2.insert(1, "ABC", 2);
	s3.insert(1, t);
	s4.insert(1, t, 0, 2);
	s5.insert(1, 3, 'A');

	s6.insert(s6.begin()+1, ' ');
	s7.insert(s7.begin()+1, 'A');
	s8.insert(s8.begin()+1, 3, 'A');
	s9.insert(s9.begin()+1, t.begin(), t.end());
	
	//s:string ��ü, sz:'\0'���ڿ�, c:����, pos:���� ��ġ, positer:���� �ݺ���, off:��ġ, n:����
	cout<<"s1.insert(pos,sz) : "          <<s1<<endl;
	cout<<"s2.insert(pos,sz, n) : "       <<s2<<endl;
	cout<<"s3.insert(pos,s) : "           <<s3<<endl;
	cout<<"s4.insert(pos, s, off, n) : "  <<s4<<endl;
	cout<<"s5.insert(pos, n, c) : "       <<s5<<endl;
	
	cout<< "s6.insert(positer) : "                  <<s6<<endl;
	cout<< "s7.insert(positer, c) : "               <<s7<<endl;
	cout<< "s8.insert(positer, n, c) : "            <<s8<<endl;
	cout<< "s7.insert(positer, iter1, iter2) : "    <<s9<<endl;
	
	
	return 0;	 
	
} 
#endif /* S8 */







#ifdef S9

//replace() ��� �Լ� 
int main()
{
	string t("ABC");
	
	string s1("Hello!");
	string s2("Hello!");
	string s3("Hello!");
	string s4("Hello!");
	string s5("Hello!");
	string s6("Hello!");
	string s7("Hello!");
	string s8("Hello!");
	string s9("Hello!");
	string s10("Hello!");	
	
	
	s1.replace(0, 3, "ABC");
	s2.replace(0, 3, t);
	s3.replace(0, 3, "ABC", 2);
	s4.replace(0, 3, t, 0, 2);
	
	s5.replace(0, 3, 2, 'A');
	
	s6.replace(s6.begin(), s6.begin()+3, "ABC");
	s7.replace(s7.begin(), s7.begin()+3, t);
	s8.replace(s8.begin(), s8.begin()+3, "ABC", 2);
	s9.replace(s9.begin(), s9.begin()+3, 3, 'A');
	s10.replace(s10.begin(), s10.end(), t.begin(), t.end());	

	
	//s:string ��ü, sz:'\0'���ڿ�, c:����, pos:��ġ, n:����, ct:����, iterb:���� �ݺ���, itere:�� �ݺ��� 
	cout<<"s1.replace(pos, n, sz) : "             <<s1<<endl;
	cout<<"s1.replace(pos, n, s) : "              <<s2<<endl;
	cout<<"s1.replace(pos, n, sz, n2) : "         <<s3<<endl;
	cout<<"s1.replace(pos, n, s, pos2, n2) : "    <<s4<<endl;
	cout<<"s1.replace(pos, n, ct, c) : "          <<s5<<endl;
	
	cout<< "s1.replace(iterb, itere, sz) : "              <<s6<<endl;
	cout<< "s1.replace(iterb, itere, s) : "               <<s7<<endl;
	cout<< "s1.replace(iterb, itere, sz, ct) : "          <<s8<<endl;
	cout<< "s1.replace(iterb, itere, sz, c) : "           <<s9<<endl;
	cout<< "s1.replace(iterb, itere, iterb2, itere2) : "  <<s10<<endl;
	
	
	return 0;	 
	
} 
#endif /* S9 */








#ifdef S10

//substr() ��� �Լ� 
int main()
{
	string t("Hello!");
	string s1, s2, s3, s4, s5;
	
	s1 = t.substr(0);
	s2 = t.substr(0, string::npos);
	
	s3 = t.substr(0, 2);
	s4 = t.substr(2, 3); 
	s5 = t.substr(2, string::npos);
	
	cout<<"sbustr(0)-0���� ������ : "       << s1 <<endl;
	cout<<"sbustr(0, npos)-0���� ������ : " << s2 <<endl;
	cout<<"sbustr(0, 2)-0���� 2�� : "       << s3 <<endl;
	cout<<"sbustr(2, 3)-2���� 3�� : "       << s4 <<endl;
	cout<<"sbustr(2, npos)-2���� ������ : " << s5 <<endl;
	
	return 0;	 
} 
#endif /* S10 */









#ifdef S11

//�Է� ��Ʈ�� �����ڿ� getline() ���� �Լ� 
int main()
{
	string s1, s2;
	
	//cin>>buf�� ���� 
	//cout << "�� ���ڿ� �Է�: " <<endl;
	//cin >> s1 >> s2;
	//cout << "s1: " << s1 << "s2: " << s2 <<endl;
	
	//cin.getline(buf)�� ����.
	cout<< "�� ���ڿ� �Է�(���� ���� ����): "<<endl;
	getline(cin, s1);
	getline(cin, s2, '\n');
	cout<< "s1: " <<s1 <<endl;
	cout<< "s2: " <<s2 <<endl;
	
	return 0;
} 
#endif /* S11 */
