#include "user.h"
#include <fstream>
#include <iostream>

User::User() {
	_name = "";
	_login = "";
	_pass = "";
}

User::User(string n, string l, string p) :
	 _name(n), _login(l), _pass(p) {
}

fstream& operator>>(fstream& is, User& other) {
	is >> other._name;
	is >> other._login;
	is >> other._pass;
	return is;
}

ostream& operator<<(ostream& os, User& other) {
	os << other._name;
	os << " ";
	os << other._login;
	os << " ";
	os << other._pass;
	return os;
}
