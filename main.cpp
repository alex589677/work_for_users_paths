// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
// main.cpp

#include <iostream>

#include "user.h"

#include "message.h"



int main() {

	User u1, u2;
	Message m1;
	fstream user_file = std::fstream("user.txt", ios::in | ios::out);

	if (!user_file) {
		 user_file = std::fstream("user.txt", ios::in | ios::out | ios::trunc);

	}
	if (user_file) {

		fstream user_file = std::fstream("user.txt", ios::in | ios::out);
		u1 = {"A", "1", "1111"};

		u2 = {"B", "2", "2222"};
		user_file << u1 << endl;
		// write data in file


		user_file.seekg(0, ios_base::beg);

		user_file >> u1;			// print data for file

		cout << u1 << endl;

	}
	user_file.close();

	return 0;

};
