#include <vector>
#include <iostream>
using namespace std;
int MAX = 3000;
vector<int> chk;
int arr[3000];
bool visit[1000];
vector<int> nums;


bool check() {
	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		visit[i] = false;
		}
	for (int i = 0; i < nums.size(); i++) {
		if (!visit[i]) { cnt++; sum += i; visit[i] = true; }
		if (cnt == 3) {}
	}
	
}
int solution(vector<int> nums) {
	int j = 0;
	int answer = -1;
	for (int i = 0; i < MAX; i++) {
		chk.push_back(i);
	}

	for (int i = 2; i < MAX; i++) {
		for (int j = i * 2; j < MAX; j += i) {
			if (chk[j] == 0) { continue; }
			chk[j] = 0;
		}
	}

	for (int i = 0; i < MAX; i++) {
		if (chk[i] == 0) { continue; }
		arr[j] = chk[i];
		j++;	
	}	

	return answer;
}



int main() {
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	solution(nums);
}