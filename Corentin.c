#include <stdio.h>

double calcultaxe(float salaire) {
    if (salaire >= 15000 && salaire < 50000) {
        return salaire * 1.3 - salaire ;
    } else if (salaire >= 50000) {
        return salaire * 1.5- salaire;
    } else{
        return salaire * 1.1- salaire; }
}
int calculage(int years) {
    return 2023 - years; }
