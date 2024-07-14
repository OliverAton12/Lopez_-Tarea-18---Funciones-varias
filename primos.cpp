//fecha: 14/07/24
////Autor: Lopez Quiroz Wagner
//tema:  Una función recibe como parámetro un vector de enteros. La función debe determinar si cada uno de estos elementos es primo o no. La función debe devolver la sumatoria de los números primos que se encontraron en el vector.
#include <iostream>
#include <vector>

// Función que determina si un número es primo
bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Función que recibe un vector de enteros y devuelve la sumatoria de los números primos
int sumarPrimos(const std::vector<int>& vec) {
    int suma = 0;
    for (int num : vec) {
        if (esPrimo(num)) {
            std::cout << num << " es primo." << std::endl;
            suma += num;
        } else {
            std::cout << num << " no es primo." << std::endl;
        }
    }
    return suma;
}

void ejecutar() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5, 6};
    int resultado1 = sumarPrimos(vec1);
    std::cout << "Sumatoria de primos en vec1: " << resultado1 << std::endl;

    std::vector<int> vec2 = {7, 8, 9, 10, 11, 12};
    int resultado2 = sumarPrimos(vec2);
    std::cout << "Sumatoria de primos en vec2: " << resultado2 << std::endl;
}

int main() {
    ejecutar();
    return 0;
}
