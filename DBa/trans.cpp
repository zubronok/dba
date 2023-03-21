#include "trans.h"

namespace transf {
	std::string __name;
	int lastAddedUserNumber = 0;
	int lastAddedSchoolNumber = 0;
	bool isSchoolAdded;

	std::string getName()
	{
		return __name;
	}

	void setName(std::string name_) {
		__name = name_;
	}

	int getLastAddedUserNumber()
	{
		return lastAddedUserNumber;
	}

	void setLastAddedUserNumber(int addedNumber)
	{
		lastAddedUserNumber = addedNumber;
	}

	int getLastAddedSchoolNumber()
	{
		return lastAddedSchoolNumber;
	}

	void setLastAddedSchoolNumber(int addedSchool)
	{
		lastAddedSchoolNumber = addedSchool;
	}

	bool isAddedSchool()
	{
		return isSchoolAdded;
	}

	void setAddedSchool(bool x)
	{
		isSchoolAdded = x;
	}

}