#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
	int answer = 0;
	cout << n / 2 + 1<<endl;
	for (int i = 1; i <= n / 2 + 1; i++) {
		int temp = 0;

		for (int j = i; ; j++) {
			if (temp == n) { answer++;
			break; }
			if (temp > n) { break; }
			else {temp += j;}

		}
	}
	return answer + 1;
}


int main() {
	cout<<solution(15);

}