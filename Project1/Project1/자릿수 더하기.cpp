#include <iostream>
#include <string>

using namespace std;

int solution(int n)
{
	int answer = 0;
	string str = to_string(n);
	for (int i = 0; i < str.length(); i++) {
		answer += str[i] - '0';
	}
	return answer;
}

int main() {

	int n = 123;
	solution(n);
}
