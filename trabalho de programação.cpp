#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    //variáveis
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    //constantes
    peso1 = 2;
    peso2 = 3;
    peso3 = 5;

    //tela inicial de apresentação
    cout << " Programa para calculo da media ponderada. " << endl;
    cout << " ######################################### " << endl;

    //solicitar infomações do usúario
    cout << " Por favor, digite a primeira nota. ";
    cin >> nota1;

    cout << " Por favor, digite a segunda nota. ";
    cin >> nota2;
    
    cout << " Por favor, digite a terceira nota. ";
    cin >> nota3;

    //cálculo da media ponderada
    //média é igual a soma da multiplicação das pelo peso, dividida pela soma dos pesos
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1+peso2+peso3) ;

    //cout << media;
    //system ("PAUSE");
    //formatar para 2 casas decimais

    cout << setprecision(3);

    //limpar a tela
    system ("cls");

    //condição para os conceitos
    if (media > 8)
    {
        cout << " A média do aluno foi: " << media << endl;
        //escrever o conceito do aluno
        cout << " O aluno teve conceito A! " << endl;
    } else if (media > 7 && media <=8)
        {
            cout << " A media do aluno foi: " << media << endl;
            cout << " O aluno teve conceito B! " << endl;
        } else if (media > 6 && media <=7)
            {
                cout << "A media do aluno foi : " << media << endl;
                cout << " O aluno tece conceito C!" << endl;
            } else if (media > 5 && media <=6)
                {
                    cout << " A media do aluno foi: " << media << endl;
                    cout << " O aluno teve conceito D! " << endl;
                } else if (media <=5)
                    {
                        cout << " A media do aluno foi: " << media << endl;
                        cout << " O aluno teve conceito E! " << endl;
                    }
    //Como verificar se o valor informado é válido?
    else
    {
        cout << " Dados inválidos!!! ";
    }                

    return 0;
}