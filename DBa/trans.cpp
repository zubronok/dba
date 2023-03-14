#include "trans.h"

namespace transf {
	std::string __name;

	std::string getName()
	{
		return __name;
	}

	void setName(std::string name_) {
		__name = name_;
	}
}