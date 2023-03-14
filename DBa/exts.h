#pragma once
#include <string>
using std::string;

namespace ex {
	string get_username();
	void set_username(string name);
	void set_username(System::String^ name);
	string username;
}