#include<iostream>
using namespace std;
int main()
{
    int age;
     cout<<"enter the age of person: " ;
     cin>>age;
	if(age>=18)
	{
		cout<<"You are eligible to vote ";
		
	}
	else
	{
		cout<< "Sorry, You are not eligible to caste your vote.\n";
		cout<< "You would be able to caste your vote after " <<18-age <<" year";
	}
	
}
