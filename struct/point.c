#include <stdio.h>
#include <stdlib.h>

struct point
{
	double x;
	double y;
};

//Type definition
typedef struct point point;

//prototype for forward function
//void point_print(const struct point* self);
void point_print(const point* self);

int main(void)
{
	//struct point apoint;
	point apoint;
	apoint.x = 5;
	apoint.y = 9;

	point_print(&apoint);
	return (0);
}

//void point_print(const struct point *self)
void point_print(const point *self)
{
	printf("(%f, %f)\n", (*self).x, (*self).y);
}
