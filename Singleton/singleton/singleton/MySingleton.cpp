#include "MySingleton.h"



MySingleton::MySingleton()
{
	val = 10;
}

MySingleton::~MySingleton()
{
}

MySingleton* MySingleton::Instance()
{
	static MySingleton instance;
	return &instance;
}
