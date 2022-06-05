#include <bits/stdc++.h>

using namespace std;

int main() {

	int test; 	int tests;

	int test_case; // declaring the test cases

	cin>>test; //taking in the test cases

	

	while(test--){ // untill test case gets 0

	  int cnt=0; //declaring a counter

	  int a,b;  // declaring 

	    int n_one,x_one;  // declaring the n and x

	    

	    cin>>n_one>>x_one;  //taking in x and y

	    if(n_one%2!=0 && x_one%2==0){ // conditions

	        cout<<"NO"<<endl;

	    }

	    else{

	        cout<<"YES"<<endl;

	    }

	    cnt++;

	}

	return 0;

}
