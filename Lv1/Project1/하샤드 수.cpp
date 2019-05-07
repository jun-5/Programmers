#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
	string s = to_string(x);
	int sum = 0, temp = 0;
	for (int i = 0; i < s.size(); i++) {
		;
		temp = s[i] - 48;
		sum += temp;
	}
	if (x%sum == 0) { return true; }
	else { return false; }
}
