#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANO 5
 int encontrar_diagonal_mas_larga(int matriz[TAMANO][TAMANO]) {
    for (int i = 0; i < TAMANO; i++) { 
        for (int j = 0; j < 4; j++) { 
            if(matriz[i][j]> 2){
                printf("la matriz no es cuadrada");
            }
            else{
                int max_longitud = 0;
    
    
    for (int i = 0; i < TAMANO; i++) {
        int fila = 0;
        int c = i;
        int longitud_actual = 0;

        while (fila < TAMANO && c >= 0) {
            if (matriz[fila][c] == 1) {
                longitud_actual++;
                if (longitud_actual > max_longitud)
                    max_longitud = longitud_actual;
            } else {
                longitud_actual = 0;
            }
            fila++;
            c--;
        }
    }
    for (int j = 1; j < TAMANO; j++) {
        int f = j;
        int col = TAMANO - 1;
        int longitud_actual = 0;
        while (f < TAMANO && col >= 0) {
            if (matriz[f][col] == 1) {
                longitud_actual++;
                if (longitud_actual > max_longitud)
                    max_longitud = longitud_actual;
            } else {
                longitud_actual = 0;
            }
            f++;
            col--;
        }
    }
    return max_longitud;
            }

 }
}
 }
int main() {
 int matriz[TAMANO][TAMANO] = {
 {0, 1, 1, 1, 0},
 {0, 1, 1, 1, 1},
 {1, 1, 1, 1, 0},
 {0, 1, 1, 0, 1},
 {1, 0, 1, 0, 1},
};
 int diagonal_mas_larga = encontrar_diagonal_mas_larga(matriz);
 printf("La secuencia de 1s m´as grande es: %d\n", diagonal_mas_larga);
 
 return 0;
 }