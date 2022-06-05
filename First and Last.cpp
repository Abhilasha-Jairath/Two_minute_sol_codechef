#include <bits/stdc++.h>

using namespace std;

int main() 

{

 int test;   //declaring test

 int tests;  //declaring test

 cin>>test;  //taking input

 while(test--)  //till the test caese runs

 {

     int numerial_one,i;  //make n numerial and i

     int a,b;     //then inialize a and b

     cin>>numerial_one;  //taking input

     int F[numerial_one];    //then inialize F numerial

     int abort; //declaring abort

     for(i=0;i<numerial_one;i++) //make for loop n by 

     cin>>F[i];  //taking input

     int max_u=F[0]+F[numerial_one-1],x_one=numerial_one-1; //make max_u

     for(i=numerial_one-1;i>=1;i--)  //by looping

     {

     	int min_u;  //make min_u        if(F[x_one]+F[x_one-1]>=max_u)  //make if condition

        max_u=F[x_one]+F[x_one-1];

        x_one--;  //decrement

     }

     cout<<max_u<<endl; //print the statement

 }

 return 0;

}
