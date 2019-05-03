#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
	int answer = 0;
	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); i++) {
		if (budget >= d[i]) { answer++; budget -= d[i];}
		else {
			return answer;
		}
	}
	return answer;
}

int main() {
	vector<int> d = { 1, 3, 2, 5, 4 };
	cout<<solution(d, 9);
}