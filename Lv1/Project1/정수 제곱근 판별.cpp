#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(long long n) {
	for (long long i = 0; i <= n; i++) {
		long long i_2 = i * i;
		if (i_2 == n) { i = i + 1; return i * i; }
		if (i_2 > n) { return -1; }
	}
}

int main() {
	long long n = 121;
	cout<<solution(n);
}