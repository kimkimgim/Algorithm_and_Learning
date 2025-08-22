#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    // A는 오름차순으로 정렬
    sort(A.begin(), A.end());
    
    // B는 내림차순으로 정렬
    sort(B.begin(), B.end(), greater<int>());
    
    int answer = 0;
    
    // 작은 수와 큰 수를 곱해서 더함
    for(int i=0; i<A.size(); ++i)
    {
        int multy = A[i] * B[i];
        answer += multy;
    }
    return answer;
}