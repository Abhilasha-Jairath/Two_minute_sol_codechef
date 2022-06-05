#include <iostream>

using namespace std;

int main() {

	int test;	int tc;

	cin>>test;

	while(test--){

		int x_one, y_one;

		int a, b;

		cin>>x_one>>y_one;

		

		if(y_one>=x_one && y_one<=x_one+200){

			cout<<"YES"<<endl;

		}

		else{

			cout<<"NO"<<endl;

		}

	}

	return 0;

}
