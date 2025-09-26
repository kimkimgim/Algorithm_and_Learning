#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compareGenre(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.second > b.second;
}

bool comparePlay(const pair<int, int> &a, const pair<int, int> &b)
{
    // 같으면 번호가 더 빠른 것을 출력
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    // 장르별 총 재생횟수
    unordered_map<string, int> genre_cnt;
    // 장르? 번호? 재생횟수?
    // pop : {1, 300}, {2, 400}
    unordered_map<string, vector<pair<int, int>>> genre_plays;
    
    // 장르별 수를 세기
    for(int i=0; i<genres.size(); i++)
    {
        genre_plays[genres[i]].push_back({i, plays[i]});
        genre_cnt[genres[i]] += plays[i];
    }
    
    // 정렬(100개정도는 변환 가능)
    vector<pair<string ,int>> sorted_genres(genre_cnt.begin(), genre_cnt.end());
    sort(sorted_genres.begin(), sorted_genres.end(), compareGenre);
    
    // 장르 내 재생 횟수가 높은 수 최대 2개 수록(단, 하나일경우 하나 수록)
    for(auto &genre : sorted_genres)
    {
        // 장르 내에서 정렬
        auto &songs = genre_plays[genre.first];
        sort(songs.begin(), songs.end(), comparePlay);
        
        // 1개일 경우 1개 출력
        for(int i=0; i<min(2,(int)songs.size()); ++i)
        {
            answer.push_back(songs[i].first);
        }
    }
    
    
    return answer;
}