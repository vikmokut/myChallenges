#include <stdio.h>
#include <stdlib.h>

typedef struct groceries
{
	char *item;
	float price;
	int qty;
	float total;
	float discount;
	float due_payment;
}groc_t;

void printg(const groc_t *self);

int main(void)
{
	groc_t item1 = {"Bread", 20.02, 5};

	printg(&item1);

	return (0);
}

void printg(const groc_t *self)
{
	printf("\n\t\t\t============Groceries List============\n");
	printf("\n\t\t\tItem\tPrice\tQuantity\tTotal\tDiscount\tPay Total Due\n");
	printf("\t\t\t%s\t%.2f\t%d\t%.2f\t%.2f\t%.2f\n", self->item, self->price, self->qty, self->price * self->qty, self->total * 0.02, self->total - self->discount);
}

/*
void usrInput(groc_t item)
{
	printf("\t\t\tEnter item name: \n");
	scanf("%s", 
}*/
