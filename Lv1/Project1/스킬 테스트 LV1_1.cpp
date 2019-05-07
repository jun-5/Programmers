#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	int sum = 0;

	for (int i = 1; i < a; i++) {

		if (i == 4 or i == 6 or i == 9 or i == 11)
		{
			sum += 30;
		}
		else if (i == 2) {
			sum += 29;
		}
		else
		{
			sum += 31;
		}
	}
		sum += b;
		sum -= 1;
		if (sum % 7 == 0) { answer = "FRI"; }
	else if (sum % 7 == 1) { answer =  "SAT"; }
	else if (sum % 7 == 2) { answer = "SUN"; }
	else if (sum % 7 == 3) { answer = "MON"; }
	else if (sum % 7 == 4) { answer = "TUE"; }
	else if (sum % 7 == 5) { answer = "WED"; }
	else if (sum % 7 == 6) { answer = "THU"; }
	return answer;
}

int main(){

	cout << solution(5, 24);

}