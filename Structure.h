#ifndef __STRUCTUR__H__
#define __STRUCTUR__H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*================================================== pile dynamique=======================*/
typedef struct piledynamique
{
    int valeure;
    struct piledynamique *pointNext;
}piledynamique,*pileD;

/*================================================== prototype=======================*/
void Test(pileD conteneur);
pileD intialisation(pileD conteneur);


#endif
