#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n) {
	string answer = "";

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) { answer.append("¼ö"); }
		else { answer.append("¹Ú"); }
	}
	return answer;
}