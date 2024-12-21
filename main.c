// PRJTRV 1
// Le but du projet est de demande des valeur entière a l'utilisateur et de les stocker dans les adresses
// des varibales (&), Nous pouvons ensuite appliqué des test arytmétique mais comme des calcules
#include <stdio.h>

int main(void) {
    int x, y, z = 0;
    printf("\n * Donner moi la valeur de x : ");
    scanf("%d", &x);
    printf("\n * Donner moi la valeur de y : ");
    scanf("%d", &y);
    printf("x = %d, y = %d\n", x, y);
    printf("\n * Adition de x + y : %d", x + y);
    z = x - y;
    printf("%d = X - Y", x, y);
    return 0;
}
