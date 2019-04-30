#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;
	if (a == b) { return a; }
	if (b > a) { int temp = a; a = b; b = temp; }
	
	for (int i = b; i <= a; i++) {
		answer += i;
	}
	return answer;
}

int main() {
	int a, b = 0;
	cin >> a >> b;
	solution(a, b);
}
