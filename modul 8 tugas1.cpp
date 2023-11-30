#include <stdio.h>

int main() {
   
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int indeks_A = 0;
    printf("a. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] > 9) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    indeks_A = 0;

    printf("b. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] > 9) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    indeks_A = 0;

    printf("c. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] > 9) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    indeks_A = 0;
    printf("d. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] % 2 != 0) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    indeks_A = 0;
    printf("e. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] % 2 != 0) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    return 0;
}
