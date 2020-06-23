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
 
Problem statement
    Given an array of length of buildings 
    find the maximum buildings that you can see
    while standing on the top of a single building
    (also count the building that you are standing on)


Answer :
    find the maximum length such that
    A[i] > A[i+1] > A[i+2] >... A[j] > A[j+1] < A[j+1] ... < A[k]
    
    A is the array of heights

    answer will be k- i
*/

int main(){
    
    ll n;cin>>n;

    ll arr[n];
    ll i,j,k;
    ll ans = 0;
    for(i = 0;i < n;i++)
        cin>>arr[i];
    for(i = 0 ;i < n;){
        ll len = 1;
        while(i+1 < n && arr[i] > arr[i+1]){
            len++;
            i++;
        }

        while(i+1 < n && arr[i] < arr[i+1]){
            len++;
            i++;
        }
        
        if(len == 1)i++;
        ans = max(ans,len);

    }
    cout<<ans<<endl;

    return 0;
}
