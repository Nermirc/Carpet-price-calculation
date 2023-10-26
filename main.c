#include <stdio.h>
#include <stdlib.h>
#define BIRIM 40
#define EMEK 200
int main()
{
  //In a student house, students want to cover the hall with carpet.
  // The cost of the carpet to be furnished is 40 TL per square meter.
  // In addition, the carpet maker charges 200 TL for labor to furnish the hall.
  //Accordingly, write a C program that takes the square meter
  //as input and calculates the total amount to be paid to the carpet dealer.

    float metrekare,ucret;
    printf("Lutfen salonun metrekaresini giriniz.\n");
    scanf("%f",&metrekare);
    ucret=metrekare*BIRIM+EMEK;
    printf("Total ucretimiz : %f",ucret);

}
