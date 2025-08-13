def funcion(cadena):
    i = 0
    
    if len(cadena) == 0 or cadena[i] != 'a':
        return 0
    i += 1

    while i + 1 < len(cadena) and cadena[i] == 'a' and cadena[i + 1] == 'b':
        i += 2

    if i + 1 == len(cadena) and cadena[i] == 'b':
        return 1

    return 0


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
