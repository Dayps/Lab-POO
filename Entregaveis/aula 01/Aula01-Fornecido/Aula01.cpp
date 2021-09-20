#include <stdio.h>
#include <iostream>
using namespace std;
//IMPLEMENTE AS FUNCOES
// EXERCICIO 1

int calcularNota(int numeroDeReproducoes, int quantidadeDePositivos, int quantidadeDeUsuariosQueOuviram) {
    int nota;
    if (numeroDeReproducoes >= 1000000)
        nota = 5;
    if (numeroDeReproducoes >= 100000 || (quantidadeDePositivos || quantidadeDeUsuariosQueOuviram) >= 50 )
        nota = 4;
    if (numeroDeReproducoes >= 10000 || (quantidadeDePositivos || quantidadeDeUsuariosQueOuviram) >= 35)
        nota = 3;
    if (numeroDeReproducoes >= 1000 || (quantidadeDePositivos || quantidadeDeUsuariosQueOuviram) >= 20)
        nota = 2;
    if (numeroDeReproducoes >= 100 || (quantidadeDePositivos || quantidadeDeUsuariosQueOuviram) >= 15)
        nota = 1;
    if (numeroDeReproducoes < 100 && (quantidadeDePositivos || quantidadeDeUsuariosQueOuviram) <= 15)
        nota = 0;

    cout << nota << endl;

    return nota;
}

// EXERCICIO 2
/*
int calcularTempoTotal(int nota, int notas[], int duracoes[], int quantidade) {
}
*/

// EXERCICIO 3
/*
bool temRepetido(string artistas[], int quantidade) {
}
*/

/* COMENTE A MAIN PARA SUBMETER */
int main() {
    int repro, avali, ouvidiferentes, resultado, positivo, resultadoPositivo;

    cout << "Numero de reproducoes: " << endl;
    cin >> repro;

    cout << "Numero de avaliacoes positivas" << endl;
    cin >> avali;

    resultadoPositivo = (avali*100)/repro;
    positivo = resultadoPositivo;

    cout << "Numero de usuarios diferentes que ouviram:" << endl;
    cin >> ouvidiferentes;

    double x = ((double)avali) / ouvidiferentes;
    double percent = x*100;

    //cout << "%f", percent;


    cout << calcularNota (repro, positivo, percent) << endl;

    return 0;
}
