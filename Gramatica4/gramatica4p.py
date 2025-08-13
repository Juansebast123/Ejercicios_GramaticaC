def funcion(cadena):
    return cadena == "abb" or cadena == "ab"


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
