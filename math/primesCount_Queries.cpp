#include <bits/stdc++.h>
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
    vector<int> getPrimes(vector<pair<int, int>> queries) {
        vector<int> seive = getSeive(MAXN);

        // Convert the sieve to a prefix sum array
        long long int sum = 0;
        for (int i = 2; i <= MAXN; i++) {
            sum += seive[i];
            seive[i] = sum;
        }

        // Process each query
        vector<int> ans;
        for (auto it : queries) {
            int l = it.first;
            int r = it.second;
            ans.push_back(seive[r] - seive[l - 1]);
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
    vector<int> ans = solution.getPrimes(Queries);
    int Q = 1;
    for (auto it : ans) {
        cout << "Answer for Query " << Q << ": " << it << endl;
        Q++;
    }
    return 0;
}
