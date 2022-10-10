#include <stdio.h>
#include <stdlib.h>

/**
 * typedef struct bio_data - 
 *
 * Description: Defining a type name for my new data type
 * and creating type using the struct function.
 *
 * No return value
 */
typedef struct bio_data
{
	char *firstname;
	char *surname;
	int yearofbirth;
	int age;
	char *sex;
	/*Takes basic biodata*/
}bio;

/**
 * struct point - entry
 *
 * Description: defining a struct then type seperately
 *
 * No return
 */
struct point
{
	double x;
	double y;
	char *pointname;
	/*Takes two points and gives it a name*/
};
typedef struct point point;

//Function prototypes
void printp(const point *self);
void printd(const bio *self);

int main(void)
{
	//One way to assign struct variables by calling varname.struct_object
	bio msd;
	msd.firstname = "Victor";
	msd.surname = "Mokut";
	msd.yearofbirth = 1990;
	msd.age = 2022 - msd.yearofbirth;
	msd.sex = "male";
	
	putchar('\n');
	printf("\t\t\t===============DISPLAY RESULTS===============\n\n");
	printd(&msd);

	//checking sizes of my structs and variables
	printf("Size of bio is: %lu\n", sizeof(bio));
	printf("The size of msd: %lu\n\n", sizeof(msd));
	printf("The size of point: %lu\n\n", sizeof(point));
	//printf("The size of msd: %lu\n\n", sizeof(msd));
	
	//Struct types may also be assigned thus - 2nd way
	bio brother = {"Joshua", "Mokut", 1999, 2022-brother.yearofbirth, "Male"};
	printd(&brother);

	//calling struct objects with a .object_name; 3rd way to assign struct variables
	point apoint = { .pointname =  "VIC POINT", .x = 9, .y = 12};
	printp(&apoint);

	return (0);
}

void printd(const bio *self)
{
	printf("\t\t\tFIRSTNAME:\t\t%s\n", (*self).firstname);
	printf("\t\t\tSURNAME:\t\t%s\n", (*self).surname);
	printf("\t\t\tYEAR OF BIRTH:\t\t%d\n", (*self).yearofbirth);
	printf("\t\t\tAGE:\t\t\t%d\n", (*self).age);
	printf("\t\t\tSEX:\t\t\t%s\n\n", (*self).sex);
}

void printp( const point *self)
{
	//dereferencing struct objects using the arrow symbol rather than (*self) as seen in printd above
	printf("\t\t\t%s:\t\t%f, %f\n\n", self->pointname, self->x, self->y);
}
