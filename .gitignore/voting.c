//Cheking whether you are eligible for voting or not
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your own age for checking your voting eligibility\n";
	cin >> age;
	
	if(age>0 && age==18)
	cout<<"You are too young to vote\n";
	else
	cout<<"You are at a perfect age to vote\n";
}
