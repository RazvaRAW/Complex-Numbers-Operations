#include "../Include/NrComplex.h"

NR_COMPLEX citire()
{
    NR_COMPLEX z;

    printf("introd. partea reala:");
    scanf_s("%f", &z.real);

    printf("introd. partea imaginara:");
    scanf_s("%f", &z.imaginar);

    return z;
}

void afisare(NR_COMPLEX z)
{
    if (z.imaginar > 0)
    {
        printf("\n %f + i * %f", z.real, z.imaginar);
    }
    else if (z.imaginar < 0)
    {
        float imag = z.imaginar * -1;
        printf("\n %f - i * %f", z.real, imag);
    }
    else
    {
           printf("\n %f", z.real);
    }

}

NR_COMPLEX nr_conjugat(NR_COMPLEX z)
{
    NR_COMPLEX z_conjugat;
    z_conjugat.real = z.real;
    z_conjugat.imaginar = -z.imaginar;

    return z_conjugat;
}

NR_COMPLEX impartire(NR_COMPLEX z1, NR_COMPLEX z2)
{
    NR_COMPLEX z2_conjugat;
    NR_COMPLEX rez;
    float numitor;

    z2_conjugat = nr_conjugat(z2);

    numitor = (float)(pow(z2_conjugat.real, 2) + pow(z2_conjugat.imaginar, 2));
    rez.real = (z1.real * z2_conjugat.real - z1.imaginar * z2_conjugat.imaginar)/numitor;
    rez.imaginar = (z1.imaginar * z2_conjugat.real + z1.real * z2_conjugat.imaginar)/numitor;
    
    return rez;
}