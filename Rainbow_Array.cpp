Link to problem - https://www.codechef.com/problems/RAINBOWA
Code:

#include <iostream>
using namespace std;

int main() {
	int cases;
	cin>>cases;
	while(cases){
	    int size;
	    cin>>size;
	    int count = 1;
	    bool status = true;
	    int arr[size];
	    for(int i=0; i<size; i++){
	        cin>>arr[i];
	    }
	    int temp=1;
	    for(int i=0; i<=size/2; i++){
	        if(arr[i]==temp or arr[i] == temp+1){
    	        if(arr[i]==arr[size-i-1]){
    	            temp = arr[i];
    	            continue;
    	        }
    	        else{
    	            status = false;
    	            break;
    	        }
    	        temp = arr[i];
	        }
     	    else{
     	        status = false;
     	        break;
     	   }
     	    if(arr[i]==temp+1){
     	        count++;
     	        continue;
     	    }
	    }
	   if(count==7){
	       if(status){
    	        cout<<"yes"<<endl;
    	    }
    	    else{
    	        cout<<"no"<<endl;
    	    }
	   }
	   else{
	       cout<<"no"<<endl;
	   }
	   cases--;
	}
	return 0;
}

