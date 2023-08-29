#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w=0, h=0; //가로, 세로
    
    for (int i=0; i<sizes.size(); i++){
        if (sizes[i][0]>sizes[i][1]) //한 요소에서 가로>세로이면
        {
            //직사각형을 가로<세로이도록 돌려넣는 과정임
            h=max(h,sizes[i][0]); //현재 세로값과 요소의 가로 중 긴 것을 h에 넣는다
            w=max(w,sizes[i][1]); //현재 가로값과 요소의 세로 중 긴 것을 w에 넣는다다
        }
        else //가로<=세로이면
        {
            h=max(h,sizes[i][1]); //가장 긴 세로를 h에 넣는다
            w=max(w,sizes[i][0]);
        }
    }
    answer=w*h;
    return answer;
}    