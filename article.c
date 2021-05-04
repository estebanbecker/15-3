#include "article.h"

//
// Created by esteb on 04/05/2021.
//
int check(char code[6], article liste[5] ){

    int t_f=1,t_f2=0,i=0,j;

    do {

        j=0;

        t_f2=0;

        while (code[j]!='\0' && liste[i].code[j]!='\0' && t_f2==0){


            if (code[j]!=liste[i].code[j]){
                t_f2=1;
            }
            ++j;
        }

        if (code[j-1]==liste[i].code[j-1]){
            t_f=0;
        }

        ++i;

    } while (t_f==1 && i!=5);

    return t_f;
}
