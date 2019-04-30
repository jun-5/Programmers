#include <string>
#include <vector>
#include <iostream>

using namespace std;

#include <string>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] % divisor == 0) {
			answer.push_back(arr[i]);
		}
	}

	if (answer.size() == 0) { answer.push_back(-1); }
	sort(answer.begin(), answer.end());
	return answer;
}

int main() {
	vector<int> arr = { 3,2,6};
	solution(arr, 10);

}