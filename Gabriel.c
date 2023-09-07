//
// Created by gabriel.de-brito on 07/09/2023.
//
#include <stdio.h>

char codefiscal(int activite) {
    if (activite == 5){
        activite = 'B';
    }else if(activite == 2){
        activite = 'C';
    }else{
        activite = 'A';
    }
    return activite;
}

float revenumensuel (float revenuannuel){
    return revenuannuel / 12;
}