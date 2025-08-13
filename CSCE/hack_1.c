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

	// Conver degrees to radian
	lat1 = lat1 * M_PI / 180.0;
	lon1 = lon1 * M_PI / 180.0;
	lat2 = lat2 * M_PI / 180.0;
	lon2 = lon2 * M_PI / 180.0;

	//Calculate delta longitude
	double delta = lon2 - lon1;



	printf("Origin: %f %f\n", lat1, lon1);
	printf("Des: %f %f\n", lat2, lon2);
	printf("Delta: %f ", delta);
	return 0;

}
