#include "votimonza.h"

float votiMonza1(float Tm[])
{
    // Aggiungiamo 0.0001 per compensare l'arrotondamento binario dei float
    if (Tm[0] <= 26.913 + 0.0001)
    {
        return 10;
    }
    else if (Tm[0] <= 27.047 + 0.0001) // Se arriva qui, è sicuramente > 26.913
    {
        return 8;
    }
    else if (Tm[0] <= 27.181 + 0.0001)
    {
        return 6;
    }
    else if (Tm[0] <= 27.448 + 0.0001)
    {
        return 4;
    }
    else
    {
        return 2;
    }
}

float votiMonza2(float Tm[])
{
    if (Tm[1] <= 27.734 + 0.0001)
    {
        return 10;
    }
    else if (Tm[1] <= 27.872 + 0.0001)
    {
        return 8;
    }
    else if (Tm[1] <= 28.010 + 0.0001)
    {
        return 6;
    }
    else if (Tm[1] <= 28.286 + 0.0001)
    {
        return 4;
    }
    else 
    {
        return 2;
    }
}

float votiMonza3(float Tm[])
{
    if (Tm[2] <= 27.216 + 0.0001)
    {
        return 10;
    }
    else if (Tm[2] <= 27.352 + 0.0001)
    {
        return 8;
    }
    else if (Tm[2] <= 27.487 + 0.0001)
    {
        return 6;
    }
    else if (Tm[2] <= 27.758 + 0.0001)
    {
        return 4;
    }
    else 
    {
        return 2;
    }
}
