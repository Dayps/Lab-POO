#include <iostream>
using namespace std;

//Criar funcao para teste e treino

int multiplica (int a, int b) {
    return a * b;
}


int main()
{
    /*
    cout << "Hello world!" << endl;
    cout << "Digite uma letra para teste: " << endl;
    cin <<
    */
    //EX03 adaptado
    int a, b;
    cout << "Digite o valor de a: " << endl;
    cin >> a;
    cout << "Digite o valor de b: " << endl;
    cin >> b;
    cout << multiplica (a, b) << endl;

    return 0;
}
