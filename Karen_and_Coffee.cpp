Link to problem: https://codeforces.com/contest/816/problem/B
Code:

#include <iostream>
using namespace std;

int main(){
    int n, k, q;
    cin >>n>>k>>q;
    int arr[200001] = {};
    while(n){
        int l, r;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
        n--;
    }
    int ps[200001] = {};
    ps[0] = arr[0];
    for(int i=1; i<=200001; i++){
        ps[i] = ps[i-1] + arr[i];
    }
    for(int i=0; i<=200001; i++){
        if(ps[i] >= k){
            ps[i] = 1;
        }
        else{
            ps[i] = 0;
        }
    }
    while(q){
        int s, e;
        cin>>s>>e;
        int count[200001] = {};
        for(int i=s; i<=200001; i++){
            count[i] = count[i-1] + ps[i];
        }
        cout<<count[e]<<endl;
        q--;
    }
    return 0;
}
