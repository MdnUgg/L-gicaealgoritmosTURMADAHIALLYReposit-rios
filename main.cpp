#include <iostream>

// Função que recebe DOIS números inteiros por referência (&)
void inverterValores(int &a, int &b) {
    int temporario = a; // Guarda o valor original de 'a'
    a = b;              // 'a' recebe o valor de 'b'
    b = temporario;     // 'b' recebe o valor original de 'a'
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "--- Antes da funcao ---" << std::endl;
    std::cout << "x: " << x << " | y: " << y << std::endl;

    // Passando x e y por referência para a função
    inverterValores(x, y);

    std::cout << "\n--- Depois da funcao ---" << std::endl;
    // Os valores originais foram alterados permanentemente!
    std::cout << "x: " << x << " | y: " << y << std::endl;

    return 0;
}