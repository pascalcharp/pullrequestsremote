//
// Created by Pascal Charpentier on 2023-05-21.
//

#include "Tugabudoire.h"

Tugabudoire::Tugabudoire() : caramel(0) {

}

void Tugabudoire::agreger() {
    caramel += 8 ;
}


int Tugabudoire::lireCaramel() const {
    return caramel ;
}

void Tugabudoire::modifierCaramel(int incr) {
    caramel += incr ;

}
