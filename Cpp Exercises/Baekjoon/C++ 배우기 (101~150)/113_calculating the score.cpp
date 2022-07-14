/*
상근이는 퀴즈쇼의 PD이다. 
이 퀴즈쇼의 참가자는 총 8개 문제를 푼다. 
참가자는 각 문제를 풀고, 그 문제를 풀었을 때 얻는 점수는 문제를 풀기 시작한 시간부터 경과한 시간과 난이도로 결정한다. 
문제를 풀지 못한 경우에는 0점을 받는다. 참가자의 총 점수는 가장 높은 점수 5개의 합이다. 
상근이는 잠시 여자친구와 전화 통화를 하느라 참가자의 점수를 계산하지 않고 있었다. 
참가자의 8개 문제 점수가 주어졌을 때, 총 점수를 구하는 프로그램을 작성하시오.

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
