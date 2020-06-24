/* Author     : Gaurav Khairnar
 * Codechef   : gaurav_1620
 * Codeforces : gaurav1620
 * Mail       : gauravak007@gmail.com
 */

#include<bits/stdc++.h>

#define ll long long
#define FOR(i,j,k) for(i = j;i <= k;i++)
using namespace std;

int main(){
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t)ts.tv_nsec);

    ofstream inputFile;
    inputFile.open("XOR_TestCase.txt",ios_base::app);
    
    ll max_n = 100000;

    ll max_len = 99;
    
    ll n = 1+rand()%max_n;

    ll ans[2];
    ans[0] = ans[1]  = 0;
    inputFile<<n<<endl;

    for(int i = 0 ; i < n;i++){
        string s;
        ll curLen = 1+ (rand()%max_len + rand()%max_len)%max_len;

        for(int j = 0;j < curLen;j++){
            char c = rand()%10 + '0';
            s += c;
            if(j == curLen-1)
                ans[(c-'0') & 1]++;
        }
        inputFile<<s;
        if(i == n-1)inputFile<<endl;
        else inputFile<<" ";
    }
    ll gg = ans[0]*ans[1];
    cout<<n<<endl;
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
    cout<<gg<<endl;
    return 0;
}
