#include "../Include/NrComplex.h"

int main()
{
    NR_COMPLEX z1;
    NR_COMPLEX z2;
    NR_COMPLEX rez;

    z1 = citire();
    afisare(z1);
    z2 = citire();
    afisare(z2);

    rez = impartire(z1, z2);
    afisare(rez);

    return 0;
}