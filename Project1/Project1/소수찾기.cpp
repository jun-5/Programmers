#include <string>
#include <vector>
#include <math.h>
#include <iostream>


using namespace std;

int solution(int n) {
	int answer = 0;
	vector<int> v;
	for (int i = 0; i <= n; i++) {
		v.push_back(i);
	}
	v[1] = 0;
	int nsqrt = (int)sqrt(n);
	for (int i = 2; i <= nsqrt; i++) {
		for (int j = i * i; j <= n; j = j + i) {
			if (v[j] == 0) { continue; }
			v[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++) {
		if (v[i] == 0) { continue; }
		answer++;
	}
	return answer;
}