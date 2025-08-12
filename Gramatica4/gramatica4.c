#include <stdio.h>
#include <string.h>

int funcion(const char *cadena) {
    return (strcmp(cadena, "abb") == 0 || strcmp(cadena, "ab") == 0);
}

int main(int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");
    char cadena[100];
    if (!file) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    while (fscanf(file, "%s", cadena) != EOF) {
        if (funcion(cadena))
            printf("%s -> acepta\n", cadena);
        else
            printf("%s -> NO acepta\n", cadena);
    }

    fclose(file);
    return 0;
}
