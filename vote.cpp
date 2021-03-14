#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Welcome! Check weather you are eligible to vote or not.\n";
	cout<<"Enter your age";
	cin>>age;
	if(age>=18)
	{
		cout<<"\nCongrats! You are eligible to vote.";
	}
	else
	{
		cout<<"\nYou are not eligible to vote.";
	}
	return 0;
}
