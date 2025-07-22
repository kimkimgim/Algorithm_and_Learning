#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<int, int> par;

int getPar(int cur) {
    if (cur != par[cur]) par[cur] = getPar(par[cur]);
    return par[cur];
}

vector<int> solution(vector<int> nodes, vector<vector<int>> edges) {
    vector<int> answer(2, 0);
    map<int, int> m;
    map<int, pair<int, int>> tree;

    for (auto i : nodes) par[i] = i;
    for (auto i : edges) { 
        m[i[0]]++; m[i[1]]++;
        int par0 = getPar(i[0]), par1 = getPar(i[1]);
        if      (par0 < par1) { par[par1] = par0; (void)getPar(i[1]); }
        else if (par0 > par1) { par[par0] = par1; (void)getPar(i[0]); }
    }
    for (auto i : par) {
        int p = getPar(i.second);
        if (m[i.first] % 2 == i.first % 2) {
            tree[p].first++;
        } else {
            tree[p].second++;
        }
    }
    for (auto i : tree) {
        if (i.second.first == 1) answer[0]++;
        if (i.second.second == 1) answer[1]++;
    }



    return answer;
}