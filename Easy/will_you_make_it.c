#include <stdbool.h>

bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
	 return (distance_to_pump <= mpg * fuel_left ? true : false);
}
