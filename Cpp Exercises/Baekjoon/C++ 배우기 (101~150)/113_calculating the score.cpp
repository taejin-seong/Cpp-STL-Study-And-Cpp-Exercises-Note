/*
����̴� ������� PD�̴�. 
�� ������� �����ڴ� �� 8�� ������ Ǭ��. 
�����ڴ� �� ������ Ǯ��, �� ������ Ǯ���� �� ��� ������ ������ Ǯ�� ������ �ð����� ����� �ð��� ���̵��� �����Ѵ�. 
������ Ǯ�� ���� ��쿡�� 0���� �޴´�. �������� �� ������ ���� ���� ���� 5���� ���̴�. 
����̴� ��� ����ģ���� ��ȭ ��ȭ�� �ϴ��� �������� ������ ������� �ʰ� �־���. 
�������� 8�� ���� ������ �־����� ��, �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

https://www.acmicpc.net/problem/2822
*/

#include <iostream>
#include <algorithm>

using namespace std;


class question {
	public:
		int score;
		int index;
};

bool comp (question q1, question q2){
	return q1.score > q2.score;
}

int main(void)
{
	question* q = new question[8];
	int total_score = 0;
	int question_index [5];
	
	for (int i = 0; i < 8; i++){
		cin>>q[i].score;
		q[i].index = i+1;
	}
	
	stable_sort(q, q + 8, comp);
	
	for (int i = 0; i < 5; i++){
		total_score += q[i].score;
		question_index[i] = q[i].index;
	}
	
	sort(question_index, question_index + 5);
	
	cout<< total_score << '\n';
	for (int i = 0; i < 5; i++){
		cout<< question_index[i] << " ";
	}
	
	return 0;
}
