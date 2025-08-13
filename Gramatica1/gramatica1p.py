def funcion(cadena):
    i = 0
    j = len(cadena) - 1

    while i < j:
        if (cadena[i] not in ('0', '1')) or (cadena[j] not in ('0', '1')):
            return 0
        if cadena[i] != cadena[j]:
            return 0
        i += 1
        j -= 1

    return len(cadena) > 0


def main():
    import sys

    try:
        with open(sys.argv[1], "r") as file:
            for linea in file:
                cadena = linea.strip()
                if funcion(cadena):
                    print(f"{cadena} = acepta")
                else:
                    print(f"{cadena} = NO acepta")
    except FileNotFoundError:
        print("Error al abrir el archivo")


if __name__ == "__main__":
    main()
