#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
	long long n = num;
	for (int i = 0; i < 500; i++) {
		cout << i << " " << n << endl;
		if (n == 1) { return i; }
		if (n % 2 == 0) { n /= 2; }
		else { n = n * 3 + 1; }
	}
	return -1;
}