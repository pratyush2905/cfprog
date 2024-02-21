#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    printf("Enter the string:");
    char s[20];
    scanf("%s", s);
    printf("\n");
    printf("TRANSMITTER:");
    printf("\nApplication Layer: AH ");
    printf("%s", s);
    printf("\n \nPRESENTATION LAYER: PHAH ");
    printf("%s",s);
    printf("\n \nSESSION LAYER: SHPHAH ");
    printf("%s", s);
    printf("\n \nTRANSPORT LAYER: THSHPHAH ");
    printf("%s", s);
    printf("\n \nNETWORK LAYER: NHTHSHPHAH ");
    printf("%s", s);
    printf("\n \nDATALINK LAYER: DHNHTHSHPHAH ");
    printf("%s", s);
    printf("\n \nMESSAGE ENTERED INTO PHYSICAL LAYER AND TRANSMITTED.");
    printf("\n \nRECEIVER:");
    printf("\n \nMESSAGE ENTERED INTO PHYSICAL LAYER");
    printf("\n \nDATALINK LAYER: DHNHTHSHPHAH ");
    printf("%s",s);
    printf("\n \nNETWORK LAYER: NHTHSHPHAH ");
    printf("%s",s);
    printf("\n \nTRANSPORT LAYER: THSHPHAH ");
    printf("%s",s);
    printf("\n \nSESSION LAYER: SHPHAH ");
    printf("%s",s);
    printf("\n \nPRESENTATION LAYER: PHAH ");
    printf("%s",s);
    printf("\n \nAPPLICATION LAYER: AH ");
    printf("%s",s);

}