#pragma once
#include <string>

#include <fstream>
#include <iostream>

using std::string;
using std::fstream;
using std::ostream;

class Message {

public:

	string _text;

	string _sender;
	string _receiver;
	Message();
	Message(string t, string s, string r);
	friend fstream& operator>>(fstream& is, Message& other);

	friend ostream& operator<<(ostream& os, Message& other);

};
