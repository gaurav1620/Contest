/* Author     : Gaurav Khairnar
 * Codechef   : gaurav_1620
 * Codeforces : gaurav1620
 * Mail       : gauravak007@gmail.com
 */

#include<bits/stdc++.h>

#define ll long long
#define FOR(i,j,k) for(i = j;i <= k;i++)
using namespace std;


/*
Problem Statement : 
    Given an array of N numbers find the total number of 
    number of pairs that will give XOR as an odd number

    1 <= N <= 10^6

    1 <= arr[i] <= 10^100 

Catch :
    As the numbers are very large , they cannot fit in long long too !
    So its better to take the numbers as a string. Then just check the
    ones place of the number and store the total count of even and odd 
    numbers.

    Now we know (EVEN XOR ODD) will always give a ODD number

    eg  101110111001  XOR  1011100   we just check the last digit.

    so the answer is basically 
    (total count of odd) * (total cout of  even)
*/

int main(){

    ll n;
    ll i,j,k;
    ll even,odd;
    
    even = odd = 0;

    for(i = 0; i < n; i++){
        string s;
        cin>>s;

        if((s[s.length()-1] - '0') & 1){
            odd++;
        }else{
            even++;
        }
    }
    ll ans = even*odd;
    cout<<ans<<endl;
    return 0;
}
