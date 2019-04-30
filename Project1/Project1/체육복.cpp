#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	int cnt = n - lost.size();
	for (int i = 0; i < lost.size(); i++) {
		for (int j = 0; j < reserve.size(); j++) {
			int a = lost[i];
			int b = reserve[j];
			if (a - 1 == b) { cnt++; reserve[j] = 999; break; }
			else if (a + 1 == b) { cnt++; reserve[j] = 999; break; }
		}
	}
	answer = cnt;

	return answer;
}