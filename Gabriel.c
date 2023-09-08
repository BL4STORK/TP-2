#include <stdio.h>

char activite(int activity){

    if (activity == 5){
        return 'B';
    }else if (activity == 2){
        return 'C';
    }else{
        return 'A';
    }
}

float monthsalary(float revenuan){
    return revenuan/12;
}