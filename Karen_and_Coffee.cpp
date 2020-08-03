Link to problem: https://codeforces.com/contest/816/problem/B
Code:

#include <iostream>
using namespace std;

int main(){
    int n, k, q;
    cin <<n<<k<<q;
    int arr[100000] = {};
    while(n){
        int l, r;
        cin<<l<<r;
        arr[l]++;
        arr[r+1]--;
        n--;
    }
    int ps[100000] = {};
    ps[0] = arr[0];
    for(int i=1; i<=1000000; i++){
        ps[i] = ps[i-1] + arr[i];
    }
    for(int i=0; i<=100000; i++){
        if(ps[i] >= k){
            ps[i] = 1;
        }
        else{
            ps[i] = 0;
        }
    }
    while(q){
        int s, e;
        cin<<s<<e;
        int count;
        for(int i = s; i<=e; i++){
            if(ps[i] == 1){
                count++;
            }
        }
        cout<<count;
        q--;
    }
    return 0;
}