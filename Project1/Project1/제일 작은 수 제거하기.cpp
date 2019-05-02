#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer;
	if (arr.size() == 1) { answer.push_back(-1); return answer;}
	int min = arr[0];
	int min_index = 0;
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] < min) { min = arr[i]; min_index = i; }
	}
	arr.erase(arr.begin() + min_index);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i];
	}
		return arr;
}
int main() {
	vector<int>arr = { 8,5,7,9,2,2,2,2,3 };
	solution(arr);

}