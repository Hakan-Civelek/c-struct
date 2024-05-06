#ifndef KISI_H
#define KISI_H

#include "stdio.h"
#include "stdlib.h"

struct KISI
{
    char* isim;
    float boy;
    float kilo;
    int yas;
};
typedef struct KISI* Kisi;

Kisi kisiOlustur(char*, float, float);
void yasIlerle(const Kisi, int);
void yemekYe(const Kisi, float);
void toString();
void kisiYoket(Kisi);

#endif