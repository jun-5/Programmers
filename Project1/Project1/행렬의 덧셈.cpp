#include <string>
#include <vector>

using namespace std;
vector<vector<int> > solution(vector<vector<int> >A, vector<vector<int> >B)
{
	vector<vector<int> > answer = A;
	for (int i = 0; i < answer.size(); i++)
	{
		for (int j = 0; j < answer[0].size(); j++)
		{
			answer[i][j] += B[i][j];
		}
	}
	return answer;
}
