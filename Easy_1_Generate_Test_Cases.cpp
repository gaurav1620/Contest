/* Author     : Gaurav Khairnar
 * Codechef   : gaurav_1620
 * Codeforces : gaurav1620
 * Mail       : gauravak007@gmail.com
 */

#include<bits/stdc++.h>

#define ll long long
#define FOR(i,j,k) for(i = j;i <= k;i++)
using namespace std;

//Maximum length of array
const ll N = 1e6;

//Maximum length of elements in the array
const ll L = 100;


int main(){
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t)ts.tv_nsec);

    ll smallTestCases = 8;
    ll largeTestCases = 8;

    ofstream inputFile;
    inputFile.open("Easy_1_Input.txt", ios_base::app);

    ofstream outputFile;
    outputFile.open("Easy_1_Output.txt", ios_base::app);
    

    while(smallTestCases--){
        ll n = rand()%10 + 1;

        inputFile <<n<<endl;

        ll arr[2];
        arr[0] = arr[1] = 0;
        while(n--){
            ll element = rand() % INT_MAX;
            arr[element & 1]++;
            inputFile<<element<<" ";
        }
        outputFile<<arr[0]*arr[1]<<endl;
        inputFile<<endl;
    }

    while(largeTestCases--){
        ll n = rand()%100 + 1;

        inputFile <<n<<endl;
        ll arr[2];
        arr[0] = arr[1] = 0;

        while(n--){
            ll len = rand() % L + 1;
            string element;
            for(ll j = 0 ; j < len;j++){
                char ch = rand()%10 + '0';
                element += ch;
            }
            arr[(element[len-1] - '0') & 1 ]++;
            inputFile<<element<<" ";
        }
        ll ans = arr[0]*arr[1];
        outputFile<<ans<<endl;
        inputFile<<endl;
    }

    
    return 0;
}
