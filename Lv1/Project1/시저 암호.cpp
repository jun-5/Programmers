#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	char c = 'z';
	vector<char> v;
	for (int i = 0; i < s.size(); i++) {
		v.push_back(s[i]);
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < n; j++) {
			if (v[i] == ' ') { continue; }
			if (v[i] == 'z') { v[i] = 'a'; continue; }
			if (v[i] == 'Z') { v[i] = 'A'; continue; }
			v[i] = v[i] + 1;
		}
	}
	for (int i = 0; i < s.size(); i++) {
		s[i] = v[i];
	}

	return s;
}