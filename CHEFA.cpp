Link to problem: https://www.codechef.com/problems/CHEFA
Code:

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i=0; i<num; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+num); 
	    long long sum=0;
	    for(int i=1; i<=num; i+=2){
	        sum += arr[num-i];
	    }
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}
