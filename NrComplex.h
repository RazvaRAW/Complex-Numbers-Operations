#include <stdio.h>
#include <math.h>

typedef struct
{
    float real;
    float imaginar;
}NR_COMPLEX;

NR_COMPLEX citire();
void afisare(NR_COMPLEX);

NR_COMPLEX impartire(NR_COMPLEX, NR_COMPLEX);