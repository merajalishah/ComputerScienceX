//Student name: 
#include<iostream>
using namespace std;

bool isprime(int a)
{
	// If the output is true ----> number is prime
	// If the output is false ----> number is not prime
	bool test=true; //initially assume number is prime
	for(int k=2;k<=a-1;k++) //for loop to generate integers for division
	{	
		if (a%k==0) //check divisibility
		{
			test= false;
			break;
		}
	}
	return test;	
}

int nextprime(int p)
{
 //Write your code here..
 
}

int prevprime(int p)
{
 //Write your code here..
 
}

int main(){
	cout<<isprime(29);//------->output should be 1 (true)
	cout<<isprime(81);//------->output should be 0 (false)
	cout<<nextprime(7); //--->output should be 11
	cout<<nextprime(7); //--->output should be 5
}
