// 이 CPP 파일은 테스트용입니다.
// 프로그래머스에서 돌리는 게 가끔 오류날 때 사용합니다.
// "check.hpp"에 해당하는 코드를 복사해주시고 CPP에서 불러와서 사용해주세요.
// ----------------------------------------------------------------------

#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include "check.hpp"

using namespace std;

ostream& operator << (ostream & tt, vector<int>& val) {
    for (auto n : val)
        tt << n << " ";
}

int main(int argc, char* argv[]) {

    vector<int> a = {44, 1, 0, 0, 31, 25};
    vector<int> b = {31, 10, 45, 1, 6, 19};
    vector<int> result = solution(a, b);

    cout << result << endl;

    return 0;
}