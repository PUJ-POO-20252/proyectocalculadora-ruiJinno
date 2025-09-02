#include <iostream>
#include "Matematicas.h" // Incluimos nuestro contrato

int main() {

    std::cout << "Ingrese el primer número" << std::endl;
    int x;
    std::cin >> x;

    std::cout << "Ingrese el segundo número" << std::endl;
    int y;
    std::cin >> y;


    int resultado_suma = sumar(x, y);
    int resultado_restar = restar(x, y);
    int resultado_multiplicar = multiplicar(x, y);
    float resultado_dividir = dividir(x, y);

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_restar << std::endl;
    std::cout << "Multiplicación: " << resultado_multiplicar << std::endl;
    std::cout << "Division: " << resultado_dividir << std::endl;

    return 0;

}