#include <stdio.h>
#include <string.h>

int funcion(const char *cadena) {
    int len = strlen(cadena);
    int count_a = 0, count_b = 0;
    int i = 0;

    while (cadena[i] == 'a') {
        count_a++;
        i++;
    }

    while (cadena[i] == 'b') {
        count_b++;
        i++;
    }

    if (i != len) 
      return 0;

    return count_b == count_a + 1;
}

int main(int argc, char *argv[]) {
    char cadena[100];
    FILE *file = fopen(argv[1], "r");
    if (!file) {
        printf("No se pudo abrir el archivo %s\n", argv[1]);
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
