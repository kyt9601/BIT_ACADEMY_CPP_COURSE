#include "Seat.h"

void Seat::setPay()
{
	if (10 <= age)
		pay += 500;
	else if (20 <= age)
		pay += 1000;
}
void Seat::setSeat_bool()
{
	if (seat_bool == false)
		seat_bool = true;
	else
		seat_bool = false;
}