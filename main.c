#include <stdio.h>

int main(void)
{
    int lato;
    printf("inserisci la lunghezza del lato:\n");
    scanf("%d", &lato);
    for (int i = 0; i < lato; i++) {
        for (int j = 0; j < lato; j++) {
            if (i == 0 || i == lato - 1 || j == 0 || j == lato - 1) {
                printf("*");
                }
            else
                {
                    printf(" ");

            }
        }
        printf("\n");
    }
    return 0;
}
