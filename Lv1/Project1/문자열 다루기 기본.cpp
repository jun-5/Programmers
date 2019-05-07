#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	if (s.size() == 4 or s.size() == 6) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i]=='0' or s[i] == '1 ' or s[i] == '2 ' or s[i] == ' 3' or s[i] == ' 4'
				or s[i] == '5' or s[i] == '6' or s[i] == '7'
				or s[i] == '8' or s[i] == '9') {continue;}
			return false;
		}
		return true;
	}
	else {
		return false;
	}
}