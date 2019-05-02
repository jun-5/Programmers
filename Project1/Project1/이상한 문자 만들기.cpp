#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

string solution(string s) {
	int cnt = 0;
	vector<char> v;
	int index = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') { index = 0;  continue; }
		if (index % 2 == 0) {
			if ('A' <= s[i] && s[i] <= 'Z') { index++;	  continue; }
			s[i] = s[i] - 32;
			index++;
		}
		else {
			if ('a' <= s[i] && s[i] <= 'z') { index++; continue; }
			s[i] = s[i] + 32;
			index++;	
		}
	}
	return s;
}

int main() {
	char a = 'a';      //소문자 97~122
	char A  ='A';		//대문자:65~90
	char z = 'z';			//소문자->대문자 -32
	char Z = 'Z';  //balnk =32;
	char blank = ' ';
	string s = "try hello world";
		//printf("a:%d~z:%d  \n A:%d  Z:%d  blank:%d", a, z, A, Z, blank);
	solution(s);


}