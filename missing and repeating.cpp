#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)

{

    sort(arr.begin(), arr.end());

    pair<int, int> p;

    p = make_pair(0,0);

    int repeat = 0;

    int index = 0;

 

    map<int, int> vis;

 

    for(int i = 0 ; i < n; i++) {

        if(arr[i] == arr[i+1]) {

            repeat = arr[i+1];

            break;

        }

    }

 

    for(int i = 0; i < n; i++) {

        vis[arr[i]] = 1;

    }

 

    for(int i = 1 ; i <= n ;i++){

        if(vis[i] != 1){

           index = i;

           break;

            

        }

    }

 

    p.second = repeat;

    p.first = index;

    

    return p;

}