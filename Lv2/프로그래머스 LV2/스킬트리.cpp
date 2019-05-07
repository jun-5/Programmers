#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<bool> v;

int find(string s,char c) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {
			return i;
		}
	}
	return 999;
}

bool check(int a) {
	for (int i = 0; i < a; i++) {
		if (v[i] == false) {
			return false;
		}
	}
	return true;
}

void init() {
	for (int i = 0; i < v.size(); i++) {
		v[i] = false;
	}
}


int solution(string skill, vector<string> skill_trees) {
	int answer = 0;

	for (int i = 0; i < skill.size(); i++) {
		v.push_back(false);
	}
	int cnt = 0;
	for (int i = 0; i < skill_trees.size(); i++) {
		for (int j = 0; j < skill_trees[i].size(); j++) {
			cnt++;

			int a=find(skill, skill_trees[i][j]);
			if (a == 0) { v[0] = true; continue; }
			if (a == 999) {continue;}
			bool b = check(a);
			if (b == false) {  break; }
			else {
				v[a] = true;
			}			
		}
		init();
		if (skill_trees[i].size() == cnt) { answer++; }
		cnt = 0;
	}

	cout << answer;
	return answer;
}

int main() {
	string s = "CBD";
	vector<string> v = { "CBADF"};
	solution(s, v);

}

//CBD	[BACDE, CBADF, AECB, BDA]