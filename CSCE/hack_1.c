/*
   ejallow
   The distance between these two locations can be computed 
   using the Spherical Law of Cosines.

*/

#include <stdio.h>
#include <math.h>

#define R 6371.0


int main(void)
{
	double lat1, lon1, lat2, lon2;

	printf("Enter origin latitude and longitude (degrees): ");
	scanf("%lf %lf", &lat1, &lon1);

	printf("Enter destination latitude and logitude (degrees)");
	scanf("%lf %lf", &lat2, &lon2);

	printf("Origin: %f %f\n", lat1, lon1);
	printf("Des: %f %f\n", lat2, lon2);
	return 0;

}
