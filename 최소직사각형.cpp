#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int left = 0;
    int right = 0;
    for (int i = 0; i < sizes.size(); i++) {
        left = max(left, max(sizes[i][0], sizes[i][1])); //the longest length between longer side of a rectangle
        right = max(right, min(sizes[i][0], sizes[i][1])); //the longest length between shorter side of a rectangle
    }
    return left * right;
}
