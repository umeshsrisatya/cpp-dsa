#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define setbitcount(x) __builtin_popcount(int x)
#define np next_permutation
#define mod 1e9 + 7
#define max max_element
#define min min_element
#define pb push_back
#define p pop_back
#define len length
#define ins(index, str) insert(index, str)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    /*1.extraction digits*/
    // int n ;
    // cin >> n ;
    // cout<< "extraction of digits in reverse order" << endl;
    // int cnt = 0;
    // while(n){
    //     cout<<n%10<<" ";
    //     n /= 10;
    //     cnt++;
    // }
    // cout<<endl<<"number of digits :=>"<<cnt<<endl;

    // reverse number
    // int sum = 0;
    // while(n){
    //     int temp = n%10;
    //     sum = sum + (temp*temp*temp);
    //     n /= 10;
    // }
    
    // armstrong
    // int sum = 0,temp = 0;
    // while(n) {
    //     temp = n % 10;
    //     sum += (temp * temp * temp);
    //     n /= 10;
    // }
    // cout<<sum;

    // print all divisors
    //    vector<int> v;
    //     for(int i = 1; i*i <= n; i++){
    //         if(n%i == 0){
    //             if(i != n/i){
    //                 v.pb(i);
    //                 v.pb(n/i);
    //             }
    //             else
    //                 v.pb(i);
    //         }
    //     }
    //     sort(v.begin(),v.end());
    //     for(auto it: v){
    //         cout<<it<<endl;
    //     }

    // prime number => a number should have exactly two factors 1 and itself
    //  for(int i = 2; i <= sqrt(n); i++){
    //          if(n%i == 0){
    //              cout<<"NO";
    //              return 0;
    //          }
    //  }
    //  cout<<"YES"<<endl;

    // gcd(a,b) =>   euclidean theorem
    // int a, b;
    // cin>> a>> b;
    // while(a>0 && b>0){
    //     if(a>b){
    //         a %= b;
    //     }else {
    //         b %= a;
    //     }
    // }
    // if(a==0){
    //     cout<<b<<endl;
    // }else{
    //     cout<<a<<endl;
    // }

    //****** prime factors of a number
    // int n;
    // cin >> n;
    // cout << "prime factors are:=>";
    // for(int i = 2; i*i <= n; i++){
    //     if(n%i == 0){
    //         cout<<i<<" ";
    //         while(n%i==0){
    //             n/=i;
    //         }
    //     }
    // }
    // if(n!=1) cout<<n<<endl;
    // cout<<endl;

    // cout primes using seives
    // int n;
    // cin>>n;
    // vector<int> seive(n, 1);
    // for (int i = 2; i * i <= n; i++)
    // {
    //     if (seive[i] == 1)
    //     {
    //         for (int j = i * i; j < n; j += i)
    //         {
    //             seive[j] = 0;
    //         }
    //     }
    // }
    // int cnt = 0;
    // for (int i = 2; i < n; i++)
    // {
    //     if (seive[i] == 1)
    //     {
    //         cnt++;
    //     }
    // }
    // cout<<"primes count in range:=>" << cnt<<endl;
    
    cout<<"endl";
}