// message.cpp

#include "message.h"
#include <iostream>
#include <string>

using namespace std;

Message::Message() {
	_text = "";
	_sender = "";
	_receiver = "";
}

Message::Message(string t, string s, string r): _text(t), _sender(s), _receiver(r) {
}


fstream& operator>>(fstream& is, Message& other) {

	is >> other._text;

	is >> other._sender;
	is >> other._receiver;

	return is;

}


ostream& operator<<(ostream& os, Message& other) {

	os << other._text;

	os << ' ';

	os << other._sender;

	os << ' ';

	os << other._receiver;

	return os;
}
