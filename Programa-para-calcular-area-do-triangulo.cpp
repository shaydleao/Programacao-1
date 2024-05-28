// Programa: Criar um programa para calcular a aréa de um triangulo.


#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main (void)
{
    char opcao;
    inicio:
    setlocale(LC_ALL, "brasilian-portuguese");
         UINT CPAGE_UTF8 = 65001;
         UINT CPAGE_DEFAULT = GetConsoleOutputCP();
         SetConsoleOutputCP(CPAGE_UTF8);

    float a, b, c, resultado;

    cout << "Por favor, informe a área da base: ";
    cin >> a;
   

    cout << "Por favor, informe a altura do triângulo: ";
    cin >> b;
    
    c = (a*b/2);

    cout << "A área do triângulo é igual a: " << " = " << c << "\n\n";
    
    cout << "Voce deseja que este programa se repita [s/n] ? ";
    cin >> opcao;
    cin.ignore();
      if (opcao == 's' || opcao == 'S')
         goto inicio;
      else if (opcao == 'n' || opcao == 'N')
         goto fim;
      else goto inicio;
    fim:
    return EXIT_SUCCESS;
}
