#include <bits/stdc++.h>
#define pb push_back
using namespace std;

#define ll long long
#define MAXN 10000000 // Defining a constant for the sieve size

class Solution {
private:
    vector<int> getSeive(int n) {
        vector<int> seive(n + 1, 1);
        seive[0] = seive[1] = 0; // 0 and 1 are not primes

        for (int i = 2; i * i <= n; i++) {
            if (seive[i]) {
                for (int j = i * i; j <= n; j += i) {
                    seive[j] = 0;
                }
            }
        }
        return seive;
    }

public:
    vector<vector<int>> getPrimes(vector<pair<int, int>> queries) {
        vector<int> seive = getSeive(MAXN);

        // Process each query
        vector<vector<int>> ans;
        for (auto it : queries) {
            int l = it.first;
            int r = it.second;
            vector<int> temp;
            for(int i = l; i < r; i++){
                if(seive[i]==1){
                    temp.pb(i);
                }
            }
            ans.pb(temp);
        }

        return ans;
    }
};

int main() {
    int n;
    vector<pair<int, int>> Queries;
    cin >> n;
    for (int i = 0; i < n; i++) {
        pair<int, int> pr;
        cin >> pr.first >> pr.second;
        Queries.push_back(pr);
    }

    Solution solution;
    vector<vector<int>> ans = solution.getPrimes(Queries);
    int Q = 1;
    for (auto it : ans) {
        cout << "Answer for Query " << Q << ": " << endl;
        Q++;
        bool newLine = (it.size()>=10);
        for(int i = 0; i < it.size(); i++){
            cout<<it[i]<<" ";
            if(i%10==0 and newLine and i!=0){
                cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}
