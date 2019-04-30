#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int x;

bool cmp(string a, string b) {
	if (a == b) { return false; }
	if (a[x] > b[x]) { return false; }
	else if (a[x] == b[x]) {
		if (a > b) return false;
		else { return true; }
	}
	else {
		return true;
	}
}

vector<string> solution(vector<string> strings, int n) {
	x = n;
	sort(strings.begin(), strings.end(), cmp);

	return strings;
}