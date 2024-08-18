#include <stdio.h>

void numero1_100() {
    printf("1");
    for (int i = 2; i <= 100; i++) {
        printf(", %d", i);
    }
    printf("\n");
}
void soma_num_impares() {
    int sum = 0;
    for (int i = 11; i <= 1000; i += 2) {
        sum += i;
    }
    printf("Soma dos numeros impares de 1 a 1000: %d\n", sum);
}
void multiplos_de_3() {
    printf("3");
    for (int i = 6; i <= 200; i += 3) {
        if (i % 10 != 3) {
            printf(", %d", i);
        }
    }
    printf("\n");
}
int main() {
    numero1_100(); 
    soma_num_impares(); 
    multiplos_de_3(); 
    return 0;
}