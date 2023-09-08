#include <stdio.h>
#include "Corentin.c"
#include "Gabriel.c"

int main() {
    int ageuser;

    int job;

    float yearsalary;

    double taxe;

    char codefiscal;

    float salary;

    printf("Quel est votre metier ? ( 1. agriculteur, 2. comptable, 3. etudiant, 4. fonctionnaire, 5. bucheron)\n");
    scanf("%d", &job);
    printf("Quelle est votre année de naissance ?\n");
    scanf("%d", &ageuser);
    printf("Quel est votre revenu annuel ?\n");
    scanf("%f", &yearsalary);

    codefiscal = activite(job);
    ageuser = calculage(ageuser);
    salary = monthsalary(yearsalary);
    taxe = calcultaxe(yearsalary);

        printf("Bienvenue, nos services constatent que:\n Vous avez %d ans.\n Vous devrez payer cette annee %.2lf euros.\n Votre code d activite est %c.\n Votre revenu mensuel est de %.2f euros.\n",ageuser,taxe,codefiscal,salary);

        return 0;

}
