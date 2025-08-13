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
	
	//Spherical law of cosines

	double distance = acos( sin(lat1) * sin(lat2) +
			cos(lat1) * cos(lat2) * cos(delta)) * R;


	//Output
	printf("\nLocation Distance\n");
	printf("==========================\n");
	printf("Origin:      (%.6f, %.6f)\n", lat1 * 180.0 / M_PI, lon1 * 180.0 / M_PI);
    	printf("Destination: (%.6f, %.6f)\n", lat2 * 180.0 / M_PI, lon2 * 180.0 / M_PI);
    	printf("Air distance is %.6f kms\n", distance);
	return 0;

}
