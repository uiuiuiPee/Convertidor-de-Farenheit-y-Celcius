#include <iostream>

float Celcius_A_Farenheit(float Celcius) {
    return (Celcius * 9 / 5) + 32;
}

float Farenheit_A_Celcius(float Farenheit) {
    return (Farenheit - 32) * 5/9;
}

int main()
{
    int Eleccion;
    std::cout << "¿Que desea convertir? \n [1] - Farenheit a Celcius \n [2] - Celsius a Farenheit \n [3] - Salir \n";
    while (true) {
        std::cin >> Eleccion;

        if (Eleccion == 1 || Eleccion == 2 || Eleccion == 3) {
            switch (Eleccion) {
            case 1:
                float Farenheit;
                std::cout << "Ingrese numero Farenheit: ";
                std::cin >> Farenheit;

                std::cout << "El numero Farenheit convertido a Celcius: " << Farenheit_A_Celcius(Farenheit) << std::endl;
                break;
            case 2:
                float Celcius;
                std::cout << "Ingrese numero Celcius: ";
                std::cin >> Celcius;

                std::cout << "El numero Celcius convertido a Farenheit: " << Celcius_A_Farenheit(Celcius) << std::endl;
                break;
            case 3:
                return 0;
            }
        }
        else {
            std::cout << "Porfavor ingrese una opcion correcta. \n";
            break;
        }
    }
    return 0;
}

