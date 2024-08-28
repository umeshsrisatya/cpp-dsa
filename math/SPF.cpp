#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define setbitcount(x) __builtin_popcount(int x)
#define np next_permutation
#define mod 1e9+7
#define max max_element
#define min min_element
#define pb push_back
#define p pop_back
#define len length
#define ins(index,str) insert(index,str)

vector<int> getSeive(){
    vector<int> seive(10e5+1, 0);
    for(int i = 1; i <= 10e5; i++) seive[i] = i;

    for(int i = 2; i*i <= 10e5; i++){
        if(seive[i] == i){
            for(int j = i*i; j <= 10e5; j+=i){
                if(seive[j] == j){
                    seive[j] = seive[i];
                }
            }
        }
    }
    return seive;
}
int main(){
    vector<int> seive = getSeive();
    int n ;
    cin >> n;
    int i = 1;
    while(n!=1){
        cout<<seive[n]<<" "<<i++<<endl;
        n /= seive[n];
    }
}