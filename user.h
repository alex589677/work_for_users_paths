#pragma once
#include <string>
#include <fstream> 
#include <iostream> 

using std::string;
using std::fstream;
using std::ostream;
 
class User {
public:
	string _name;
	string _login;
	string _pass;
	User();
	User(string n, string l, string p);	
	friend fstream& operator>>(fstream& is, User& other);
	friend ostream& operator<<(ostream& os, User& other); 
};
