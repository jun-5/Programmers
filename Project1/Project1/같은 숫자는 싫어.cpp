#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	int cmp = arr[0];
	answer.push_back(cmp);
	for (int i = 1; i < arr.size(); i++) {
		if (cmp == arr[i]) { continue; }
		cmp = arr[i];
		answer.push_back(cmp);
	}

	return answer;
}
