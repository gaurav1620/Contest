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
    Given an array of N numbers (Positive), rearrange them such that

    summation of |arr[i] - arr[i-1]| for i = 1 to i = N-1 (Zero indexed)
    is maximised.

Answer : 
    Sort the array and then choose the elements from opposite ends

    Eg : 4 7 2 9 8 1 

        After Sorting : 1 2 4 7 8 9

        Answer : 1 9 2 8 4 7
*/
int main(){
    ll n;cin>>n;

    ll arr[n];
    ll i;
    
    for(i = 0; i < n; i++)
        cin>>arr[i];

    sort(arr,arr+n);

    for(i = 0; i < n/2; i++){
        cout<<arr[i]<<" "<<arr[n-1-i]<<" ";
    }
    
    if(n%2)cout<<arr[n/2];

    cout<<endl;
    return 0;

    /*there is one more thing here, there can be multiple ansewers,
     * for eg we can also get the same total differnece if we
     * reverse the array and 
     */

}
