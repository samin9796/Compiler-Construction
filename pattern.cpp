#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
 	string input;
 	regex deptName("[A-Z][A-Z][A-Z]");

 	while(true)
 	{
 		cout<<"Give me your department name!"<<endl;
 		cin>>input;
 		if(!cin) break;

 		if(input=="q")
 			break;
 		if(regex_match(input,deptName))
 			cout<<"Matched!"<<endl;
 		else
 		{
 			cout<<"Invalid input!"<<endl;
 		}
 	}
}
