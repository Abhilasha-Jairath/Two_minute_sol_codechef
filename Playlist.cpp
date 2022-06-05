#include <iostream>
using namespace std;

int main() {
	int test;         
	int tests;
	int tc;          //declaring testcases
	cin>>test;       //take input 
	while(test--){   //till tests runs
		int n_one, x_one;  //delaring n_one and x_one
		int a, b;  //delacring a_one and b_one
		cin>>n_one>>x_one;
		
		int res = n_one/(3*x_one); //make res and input formula
		cout<<(res)<<endl;   //print 
	}
	return 0;
}
