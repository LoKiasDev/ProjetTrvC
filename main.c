// PRJTRV 2
// Affichages des valeur, des adresses et des valeur hexadec, valeur signé, non signé
#include <stdio.h>
#include <conio.h>
int main(void) {
    int x = 0;
    int y = 0;
    int z = 0;
    unsigned w = 0;
    printf("\n * Donner moi la valeur de x : ");
    scanf("%d", &x);
    printf("\n * Donner moi la valeur de y : ");
    scanf("%d", &y);

    printf("\n\t * Valeur de x : %d\n\tAdresse de x : %04X h ", x, &x);
    printf("\n\n\t * Valeur de y : %d\n\t Adresse de y : %04X h ", y, &y);
    printf("\n\n\t * Valeur de z : %d\n\t Adresse de z : %04X h ", z, &z);
    printf("\n\n\t * Valeur de w (Unsigned) : %d\n\t Adresse de z : %04X h \n", w, &w);

    z = x - y; // Application d'un calcule et stockage de ce calule dans la variables Z

    printf("\nValeur apres calcule de Z : ");
    printf("\n\n\t * Valeur de x : %d\n\t Adresse de x : %04X h ", x, &x); // L'adresse de X après calcule ne changeras pas
    printf("\n\n\t * Valeur de y : %d\n\t Adresse de y : %04X h ", y, &y); // L'adresse de Y ne changeras pas après le calcule
    printf("\n\n\t * Valeur de z : %d\n\t Adresse de z : %04X h ", z, &z); // L'adresse de Z ne changeras pas non plus mais bien sa valeur
    printf("\n\n\t * Valeur de w (Unsigned) : %d\n\t Adresse de w1 : %04X h \n", w, &w);

    w = x - y; // Application d'un calcule et stockage du cvalcule dans la variables W (Unsigned donc uniquement positif)

    printf("\nValeur apres calcule de Z : ");
    printf("\n\t * Valeur de x : %d\n\tAdresse de x : %04X h ", x, &x);
    printf("\n\n\t * Valeur de y : %d\n\t Adresse de y : %04X h ", y, &y);
    printf("\n\n\t * Valeur de z : %d\n\t Adresse de z : %04X h ", z, &z);
    printf("\n\n\t * Valeur de w (Unsigned) : %d\n\t Adresse de w1 : %04X h \n", w, &w);

    getch();

    return 0;
}
