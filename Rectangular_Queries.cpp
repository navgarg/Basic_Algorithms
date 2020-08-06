Link to problem: https://www.codechef.com/problems/RECTQUER
Code:

#include <iostream>
using namespace std;

int main() {
	int size;
	cin>>size;
	int arr[size][size];
	for(int i=0; i<size; i++){
	    for(int j=0; j<size; j++){
	        cin>>arr[i][j];
	    }
	}
	int cases;
	cin>>cases;
	while(cases){
	    int x1, x2, y1, y2;
	    cin>>x1>>y1>>x2>>y2;
	    x1 = size-x1;
	    x2 = size-x2;
	    y1 = size-y1;
	    y2 = size-y2;
	    int count = 0;
	    int arr[size*size];
	    for()
	    cases--;
	}
	return 0;
}
