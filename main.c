#include <stdio.h>
#include "Corentin.c"

double revenu;
double annee;

int main() {
    printf(" Entrez votre revenu annuel :\n");
    scanf("%lf",&revenu);
    calculerTaxe(revenu);

    printf("entrez votre date de naissance :");
    scanf("%lf",&annee);
    calculage(annee);


    return 0;
}
