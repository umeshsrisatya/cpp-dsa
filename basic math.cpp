#include<bits/stdc++.h>
using namespace std;
int reverse(int n ){
    int reverse_num=0;
    int lastdigit=0;
    int temp=n;
    while(n!=0){
        lastdigit=n%10;
        reverse_num=(reverse_num*10)+lastdigit;
        n/=10;
    }
     return reverse_num;a
}
// brute force
void printAllDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
// better
void printAllDivisorsBetter(int n){
    set<int> s;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            s.insert(i);
            if(n/i!=i){
                s.insert(n/i);
            }
        }
    }
    for(auto it :s){
        cout<<it<< " ";
    }
    cout<<endl;
}
// brute force
void isPrimeBrute(int n ){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if (n%i==0) cnt++;
    }if (cnt==2) cout<<"prime"<<endl;
    else cout<<"composite "<<endl;
}
// optimal 
bool isPrime(int n ){
    int cnt=0;
    // int sq=sqrt(n);
    for(int i=1;i*i<=n /*i<=sqrt(n)*/;i++){
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
        if(cnt>2) return false; 
    }
    if(cnt==2) return true;
}
void findFactors(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i == 0){
            cout<<i<<" ";
            if(n/i!=i){
                cout<<n/i<<" ";
            }
        }
    }
}
// bruteforce to find gcd
int highestCF(int n1,int n2){
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if((n1%i==0) && (n2%i==0)){
            gcd=i;
        }
    }
    return gcd;
}
// better solution to find gcd
int betterHighestCF(int n1,int n2){
    for(int i=min(n1,n2);i>=1;i--){
        if((n1%i==0) && (n2%i==0)){
            return i;
        }
    }
}
//optimal euclidean algorithm
int  optimalHCF(int n ,int m){
    while(n>0 && m>0){
        if(n>m) n%=m;
        else m%=n;
    }
    if(n==0) return m;
    return n;
}
int main (){
    int n=100;
    // printAllDivisorsBetter(36);
    // printAllDivisors(36);
    // cout<<isPrime(12);
    return 0;
}
