//fecha: 14/07/24
////Autor: Lopez Quiroz Wagner
//tema:    Diseñe la función que multiplica todos los elementos del vector por un número que pasa por parámetro
#include <iostream>

// Tamaño máximo del array
const int MAX = 100;

// Función que multiplica todos los elementos del array por un número
void multiplicarArray(int arr[], int size, int numero) {
    for (int i = 0; i < size; i++) {
        arr[i] *= numero;
    }
}

// Función para imprimir el array
void imprimirArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Definir arrays de ejemplo
    int array1[MAX] = {1, 2, 3, 4, 5};
    int array2[MAX] = {10, 20, 30, 40, 50};

    int size1 = 5; // Tamaño del array1
    int size2 = 5; // Tamaño del array2

    // Primera ronda de llamadas a imprimirArray y multiplicarArray
    std::cout << "Primera ronda de operaciones:" << std::endl;
    
    std::cout << "Array 1 antes de multiplicar: ";
    imprimirArray(array1, size1);

    multiplicarArray(array1, size1, 3);
    std::cout << "Array 1 después de multiplicar por 3: ";
    imprimirArray(array1, size1);

    multiplicarArray(array1, size1, 2);
    std::cout << "Array 1 después de multiplicar por 2: ";
    imprimirArray(array1, size1);

    std::cout << "Array 2 antes de multiplicar: ";
    imprimirArray(array2, size2);

    multiplicarArray(array2, size2, 4);
    std::cout << "Array 2 después de multiplicar por 4: ";
    imprimirArray(array2, size2);

    multiplicarArray(array2, size2, 5);
    std::cout << "Array 2 después de multiplicar por 5: ";
    imprimirArray(array2, size2);

    // Segunda ronda de llamadas a imprimirArray y multiplicarArray
    std::cout << "\nSegunda ronda de operaciones:" << std::endl;
    
    std::cout << "Array 1 antes de segunda ronda de multiplicaciones: ";
    imprimirArray(array1, size1);

    multiplicarArray(array1, size1, 1);
    std::cout << "Array 1 después de multiplicar por 1: ";
    imprimirArray(array1, size1);

    multiplicarArray(array1, size1, 2);
    std::cout << "Array 1 después de multiplicar por 2 nuevamente: ";
    imprimirArray(array1, size1);

    std::cout << "Array 2 antes de segunda ronda de multiplicaciones: ";
    imprimirArray(array2, size2);

    multiplicarArray(array2, size2, 1);
    std::cout << "Array 2 después de multiplicar por 1: ";
    imprimirArray(array2, size2);

    multiplicarArray(array2, size2, 3);
    std::cout << "Array 2 después de multiplicar por 3: ";
    imprimirArray(array2, size2);

    return 0;
}
