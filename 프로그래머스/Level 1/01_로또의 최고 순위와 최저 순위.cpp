// Since 2022-01-03
// 문제 설명 : https://programmers.co.kr/learn/courses/30/lessons/77484

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> answer;
    vector<int> result(2);
    vector<int>::iterator it;
    vector<int> count(2);

    for (size_t i = 0; i < 6; i++)
    {
        if (lottos[i] != 0)
        {
            it = find(win_nums.begin(), win_nums.end(), lottos[i]);
            if (it != win_nums.end())
                count[1]++; // lottos[i]와 일치하는 값이 있을 경우 Count
        }
        else
            count[0]++; // 0이 몇개 있는지 Count
    }

    result[0] = 7 - (count[0] + count[1]);
    if (result[0] >= 7)
        result[0] = 1;
    result[1] = 7 - count[1];
    if (result[1] >= 7)
        result[1] = 6;

    return result;
}