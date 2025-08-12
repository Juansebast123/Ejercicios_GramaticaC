#include <stdio.h>
#include <string.h>

int funcion(const char *cadena) {
    int i = 0, j = strlen(cadena) - 1;

    while (i < j) {
        if ((cadena[i] != '0' && cadena[i] != '1') ||
            (cadena[j] != '0' && cadena[j] != '1')) {
            return 0;
        }
        if (cadena[i] != cadena[j]) {
            return 0;
        }
        i++;
        j--;
    }

    return strlen(cadena) > 0;
}


int main(int argc, char *argv[]) {
    char cadena[100];
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    while (fscanf(file, "%s", cadena) != EOF) {
        if (funcion(cadena)) {
            printf("%s = acepta\n", cadena);
        } else {
            printf("%s = NO acepta\n", cadena);
        }
    }

    fclose(file);
    return 0;
}
