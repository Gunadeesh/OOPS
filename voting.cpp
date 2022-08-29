#include <iostream>
using namespace std;

int main()
{
	int age ;

	// Input age
	cout<<"Enter the age of the person: ";
	cin>> age;

	// Check voting eligibility
	if (age>=18)
	{
		cout<<"You are eligible for voting.";
	}
	else
	{
		cout<<"You are not eligible for voting,you need to wait for another " << 18-age << " years ";
	}

	return 0;
}
