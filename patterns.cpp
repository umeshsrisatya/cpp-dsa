#include<bits/stdc++.h>
using namespace std;
#define ll long long;
/*
*****
*****
*****
*****
*****
*/
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
*
**
***
****
*****
*/
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
1
12
123
1234
12345
*/
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
/*
1
22
333
4444
55555
*/
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
/*
* * * * * 
* * * * 
* * * 
* * 
* 
*/
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*
        *         
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * * 
*/
void print7(int n ){
    for(int i=0;i<n;i++){
        for(int x=0;x<(n-i-1);x++){
            cout<<"  ";
        }
        for(int z=0;z<(2*i+1);z++){
            cout<<"* ";
        }
        for(int y=0;y<(n-i-1);y++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
/*
* * * * * * * * * 
  * * * * * * *   
    * * * * *     
      * * *       
        *         
*/
void print8(int n ){
    for(int i=0;i<n;i++){
        for(int x=0;x<i;x++){
            cout<<"  ";
        }
        for(int z=0;z<((2*n)-1-(2*i));z++){
            cout<<"* ";
        }
        for(int y=0;y<i;y++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
/*
*
**
***
****
*****
****
***
**
*
*/
void print9(int n){
    for(int i=0;i<=(2*n-1);i++){
        int stars=i;
        if (stars>n) stars= 2*n-i;
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
*
**
***
****
*****
****
***
**
*
*/
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
1
01
101
0101
10101
*/
void print11(int n ){
    int start=1;
    for(int i=0;i<n;i++){
        if (i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start^=1;
        }
        cout<<endl;
    }
}
/*
1        1
12      21
123    321
1234  4321
1234554321
*/
void print12(int n){
    int spaces=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=0;k<spaces;k++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        spaces-=2;
    }
}
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
void print13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/
void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
ABCDE
ABCD
ABC
AB
A
*/
void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<=('A'+(n-i-1));ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
/*
A
BB
CCC
DDDD
EEEEE
*/
void print16(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch='A'+i-1;
            cout<<ch;
        }
        cout<<endl;
    }
}
/*
A    
ABA   
ABCBA  
ABCDCBA 
ABCDEDCBA
*/
void print17(int n){
    
    for(int i=0;i<n;i++){
        for(int x=0;x<(n-i-1);x++){
            // cout<<" ";
        }
        char ch='A';
        int temp=2*i+1;
        int breakpoint=temp/2;
        for(int l=1;l<=temp;l++){
           cout<<ch;
           if(l>breakpoint) {
            ch--;
            continue;
           }
           ch++;
        }
        for(int y=0;y<(n-i-1);y++){
            cout<<" ";
        }
        cout<<endl;
    }
}
/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/
void print18(int n){
    char c=64+n;
    for(int i=0;i<n;i++){
        for(char ch=c-i;ch<=c;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
E 
E D 
E D C 
E D C B 
E D C B A 
*/
void print19(int n){
    char c=64+n;
    for(int i=0;i<n;i++){
        for(char ch=c;ch>=c-i;ch--){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
void print20(int n){
    int spaces=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        cout<<endl;
        spaces+=2;
    }
    spaces=2*n-2;
    for(int i=0;i<n;i++){
         for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=spaces;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        spaces-=2;
        cout<<endl;
    }
}
/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
void print21(int n){
    int spaces = 2*n - 2;
    for(int i = 1;i<=2*n-1;i++){
        int stars=i;
        if(i > n) stars = 2*n - i ;
        // stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        // spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        // stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}
/*
*****
*   *
*   *
*   *
*****
*/
void print22(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0) or (j==0) or(i==(n-1)) or (j==(n-1))) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/
void print23(int n){
    for(int i=0;i<(2*n-1);i++){
        for(int j=0;j<(2*n-1);j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom= (2*n-2)-i;
            int num=min(min(top,bottom),min(left,right));
            cout<<(n-num);
        }
        cout<<endl;
    }
}
// main 
int main (){
    int n;
    cin>>n;
    print23(n);
    return 0;
}
