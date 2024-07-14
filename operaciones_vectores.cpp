//fecha: 14/07/24
////Autor: Lopez Quiroz Wagner
//tema:    Diseñe la función que suma las posiciones(índice) pares del vector y el resultado final lo multiplica por 100. Las posiciones impares del vector primero las multiplica por 2 y luego las suma. La función debe devolver la división de las 2 sumatorias realizadas previamente.



#include <iostream>
#include <vector>

double procesarVector(const std::vector<int>& vec) {
    int sumaPares = 0;
    int sumaImpares = 0;

    for (size_t i = 0; i < vec.size(); ++i) {
        if (i % 2 == 0) {
            sumaPares += vec[i];
        } else {
            sumaImpares += vec[i] * 2;
        }
    }

    sumaPares *= 100;
    return static_cast<double>(sumaPares) / sumaImpares;
}

void ejecutar() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5, 6};
    double resultado1 = procesarVector(vec1);
    std::cout << "Resultado 1: " << resultado1 << std::endl;

    std::vector<int> vec2 = {7, 8, 9, 10, 11, 12};
    double resultado2 = procesarVector(vec2);
    std::cout << "Resultado 2: " << resultado2 << std::endl;
}

int main() {
    ejecutar();
    return 0;
}
