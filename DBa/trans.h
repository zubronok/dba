#pragma once
#include <string>
#define sst System::String^

namespace transf {
	std::string getName();
	void setName(std::string name_);

	int getLastAddedUserNumber();
	void setLastAddedUserNumber(int addedNumber);

	int getLastAddedSchoolNumber();
	void setLastAddedSchoolNumber(int addedSchool);
}