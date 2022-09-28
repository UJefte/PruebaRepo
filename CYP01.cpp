#include <Stdio.h>
void main(void) {
	float x, y, Anc, Alt, EleAn, EleAlt;
	int coor1x, coor2x, coor1y, coor2y;
	scanf_s("%f", &x);
	printf("%5.0f", x);
	scanf_s("%f", &y);
	printf("%5.0f", y);
	scanf_s("%f", &Anc);
	printf("%5.2f", Anc);
	scanf_s("%f", &Alt);
	printf("%5.2f", Alt);
	scanf_s("%f", &EleAn);
	printf("%5.2f", EleAn);
	scanf_s("%f", &EleAlt);
	printf("%5.2f", EleAlt);
	coor1x = x * Anc;
	coor2x = (x * EleAn) + coor1x;
	coor1y = y * Alt;
	coor2y = (y * EleAlt) + coor1y;
	printf("%5.0i %5.0i %5.0i %5.0i", coor1x, coor1y, coor2x, coor2y);
}