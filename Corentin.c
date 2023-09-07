#include <stdio.h>

double calculerTaxe(double revenuAnnuel) {
    double taxe;

    if (revenuAnnuel > 50000) {

        taxe = revenuAnnuel * 0.50;
    } else if (revenuAnnuel > 15000) {

        taxe = revenuAnnuel * 0.30;
    } else {

        taxe = revenuAnnuel * 0.10;
    }


    return taxe;
}


double calculage(double birthyear){
        double ageuser;
        ageuser = 2023 - birthyear;

        return ageuser;
}