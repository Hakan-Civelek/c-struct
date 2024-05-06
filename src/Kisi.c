#include "Kisi.h"

Kisi kisiOlustur(char* isim, float boy, float kilo){
    Kisi this;
    this = malloc(sizeof(struct KISI));
    this->isim = isim;
    this->boy = boy;
    this->kilo = kilo;
    this->yas = 0;
}

void yasIlerle(const Kisi this, int deger){
    this->yas+=deger;
}
void yemekYe(const Kisi this, float kalori){
    this->kilo+=kalori/1000;
}
void toString(const Kisi this){
    printf("%s %d %f %f", this->isim, this->yas, this->boy, this->kilo);
}
void kisiYoket(Kisi this){
    if(this != NULL) free(this);
}