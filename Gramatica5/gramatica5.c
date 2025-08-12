#include <stdio.h>
#include <string.h>

int funcion(const char *cadena) {
    int i = 0;
    
    if (cadena[i] != 'a') 
      return 0;
    i++;

    while (cadena[i] == 'a' && cadena[i + 1] == 'b') {
        i += 2;
    }

    if (cadena[i] == 'b' && cadena[i + 1] == '\0') {
        return 1;
    }

    return 0;
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
