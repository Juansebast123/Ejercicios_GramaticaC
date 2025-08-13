def funcion(cadena):
    count_a = 0
    count_b = 0
    i = 0
    len_cad = len(cadena)

    while i < len_cad and cadena[i] == 'a':
        count_a += 1
        i += 1

    while i < len_cad and cadena[i] == 'b':
        count_b += 1
        i += 1

    if i != len_cad:
        return 0

    return count_b == count_a + 1


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
