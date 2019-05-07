#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;
int arr[1000000];
stack<int>s;
vector<int> solution(vector<int> p) {
	vector<int> a;
	int cnt = 0;
	for (int i = 0; i < p.size(); i++) {
		int temp = p[i];
		cnt = 0;
		for (int j = i; j < p.size(); j++) {
			cnt++;
			if (temp > p[j]) { break; }

		}
		a.push_back(--cnt);
	}


	return a;
}

int main() {
	vector<int>v = { 1,2,3,2,3 };
	solution(v);

}

//prices	return
//[1, 2, 3, 2, 3][4, 3, 1, 1, 0]