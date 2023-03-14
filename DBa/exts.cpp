#include "exts.h"
#include <msclr/marshal_cppstd.h>
string ex::get_username()
{
	return ex::username;
}

void ex::set_username(string name)
{
	ex::username = name;
}

void ex::set_username(System::String^ name)
{
	ex::username = msclr::interop::marshal_as<std::string>(name);
}
