#include <stdio.h>
#include <string.h>
#include "votimonza.h"


int main()
{
    char circuit[12];
    float Tm[3];
    float Tb[3];
    float Ts[3];
    float votoM1, votoM2, votoM3;
    float votoB1, votoB2, votoB3;
    float votoS1, votoS2, votoS3;


    printf("Enter a circuit between Monza, Baku and Singapore: ");
    scanf(" %11s", circuit);

if ((strcasecmp(circuit, "monza") == 0) || (strcasecmp(circuit, "baku") == 0) || (strcasecmp(circuit, "singapore") == 0))
{
    for (int i = 0; i < 3; i++)
    {
        printf("[%s] Enter your time in S%d: ", circuit, i + 1);
        scanf("%f", &Tm[i]);
    }
}
else 
{
    printf("This circuit is invalid! Sorry, try again with one of those: Monza, Baku, Singapore\n");
    return 1;
}


if (strcasecmp(circuit, "monza") == 0)
{
    votoM1 = votiMonza1(Tm);
    printf("In S1 you get a vote of: %g\n", votoM1);

    votoM2 = votiMonza2(Tm);
    printf("In S2 you get a vote of: %g\n", votoM2);

    votoM3 = votiMonza3(Tm);
    printf("In S3 you get a vote of: %g\n", votoM3);
}

    return 0;
}
