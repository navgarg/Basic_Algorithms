Link to problem - https://www.spoj.com/problems/CSUMQ/
Code:

#include <iostream>
using namespace std;

int main() {
	int size;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int cases;
	cin>>cases;
	while(cases){
		int k, l;
		cin>>k>>l;
		int sum=0;
		for(int i=k; i<=l; i++){
			sum+=arr[i];
		}
		cout<<sum<<endl;
		cases--;
	}
	return 0;
}
