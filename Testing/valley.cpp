#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t)ts.tv_nsec);

    ofstream inputFile;
    inputFile.open("valley_TestCase.txt",ios_base::app);



    int n;
    n = 5000;
    
    //
    inputFile<<n<<endl;

    int arr[n];
    for(int i = 0 ; i < n;i++){

        arr[i] = rand()%100+2;
    
        //
        inputFile<<arr[i];
        if(i == n-1)inputFile<<endl;
        else inputFile<<" ";
    }

    
    int ans = -1;
    
    for(int i = 0 ;i < n;){
        bool lef = false;
        bool rig = false;
        
        int ind = i;
        int len = 1;
        while(i+1 < n && arr[i] > arr[i+1]){
            lef = true;
            i++;
            len++;
        }
        while(i+1 < n && arr[i] < arr[i+1]){
            rig = true;
            i++;
            len++;
        }
        if(rig && lef){
            ans = max(ans,len);
        }else if(! (lef||rig)){
            i++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

