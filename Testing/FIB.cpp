/* Author     : Gaurav Khairnar
 * Codechef   : gaurav_1620
 * Codeforces : gaurav1620
 * Mail       : gauravak007@gmail.com
 */

#include<bits/stdc++.h>

#define ll long long int
#define FOR(i,j,k) for(i = j;i <= k;i++)
using namespace std;

long long int fib(ll f,ll s,ll n){
    if(n == 1)return f;
    if(n == 2)return s;
    return fib(f,s,n-1)+fib(f,s,n-2);

}

int main(){
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t)ts.tv_nsec);

    ofstream inputFile;
    inputFile.open("XOR_TestCase.txt",ios_base::app);
    
    ll f,s,n;
    f = 53,s = 24,n = 50;
    ll dp[101];
    dp[1] = 53;
    dp[2] = 24;

    for(int i = 3;i <= n;i++){
        dp[i] = dp[i-1]+dp[i-2];

    }
    cout<<dp[n]<<endl;

    cout<<fib(f,s,n)<<endl;
    return 0;
}
