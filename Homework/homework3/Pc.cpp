#include "Pc.h"

void PC::setTime(int time)
{
	if (0 < time)
		this->time = time;
}
void PC::setUse()
{
	if (use_bool == false)
	{
		use_bool true;
	}
	else
	{
		use_bool = false;
		time = 0;
	}
}