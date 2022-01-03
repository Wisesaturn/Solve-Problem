// 이 곳에다가 해당 CPP 파일을 붙여 넣습니다.
// 그러고 나서 '디버그_확인용.cpp'를 빌드시켜 확인합니다.
// ---------------------------------------------------------------

// Since 2022-01-03
// 문제 설명 : https://programmers.co.kr/learn/courses/30/lessons/77484

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    vector<int> result(2);
    vector<int>::iterator it;

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {

            it = find(win_nums.begin(), win_nums.end(), lottos[j]);

            if (i == 0)
            { // 최고일 때
                if (it != win_nums.end() || lottos[j] == 0)
                    result[i]++;
            }
            else
            { // 최저일 때
                if (it != win_nums.end())
                    result[i]++;
            }
        }
        if (result[i] != 0)
            result[i] = (result[i] - 7) * -1;
        else
            result[i] = 6;
    }
    return result;
}