#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(long long n) {
	vector<int> a;
	while (1) {
		int x = n % 10;
		a.push_back(x);
		if (n < 10) { return a; }
		n /= 10;
	}
	return a;
}

int main() {
	long long n = 10000000000;
	solution(n);
}