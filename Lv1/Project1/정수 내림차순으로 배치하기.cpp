#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stdlib.h>

using namespace std;

bool cmp(char a, char b) {
	if (a > b) {
		return true;
	}
	else if (a == b) { return false; }
	else {
		return false;
	}

}


long long solution(long long n) {
	long long answer = 0;
	string s = to_string(n);

	sort(s.begin(), s.end(), greater<char>());
	
	answer = stoull(s);
	return answer;
}

int main() {
	long long n = 8000000000;
	solution(n);

}