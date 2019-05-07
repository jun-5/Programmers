#include <string>
#include <vector>
#include <iostream>

using namespace std;
long long v[10000005];
int a = 1234567;

long long solution(int n) {
	long long answer = 0;
	v[0] = 0;
	v[1] = 1;
	for (long long i = 2; i <= n; i++) {
		v[i] = v[i - 2]%a + v[i - 1]%a;
	}


	return v[n]%a;

}

long long solution_2(int n) {
	long long answer = 0;
	
	if (n == 0) { return 0; }
	if (n == 1) { return 1; }
	v[n] = solution_2(n - 2) + solution_2(n - 1);
	return v[n];
}




int main() {
	cout << solution(10000) << endl;
	;
}