#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0, painted = 0;
    for (int& s : section)
        if (s > painted)
        {
            painted = s + m - 1;
            answer++;
        }
    return answer;
}