#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int suma = 0;
    unsigned int count = 0;
    Stocznia stocznia{};
    while(suma<towar)
        {
            Statek *s = stocznia();
            if(dynamic_cast<Zaglowiec*>(s))
            {
                count++;
            }
            suma = suma + s->transportuj();

        }
    // Twoja implementacja tutaj
    return count;
}