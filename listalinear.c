#include <iostream>

using namespace std;

const int TAM = 10;
int lista[TAM];
int contador = 0;


void insereLista(int valor, int pos) {
    int i;
    if (contador == TAM) {
        cout << "LISTA CHEIA" << endl;
        return;
    }
    if (pos<0 || pos>contador) {
        cout << "posicao invalida" << endl;
        return;
    }
    for (i=contador; i>pos; i--)
        lista[i] = lista[i-1];
    lista[pos] = valor;
    contador++;
    cout << "valor inserido" << endl;
}


void recuperaLista(int pos) {
    if (pos<0 || pos >= contador) {
        cout << "posicao invalida" << endl;
        return;
    }
    cout << lista[pos] <<endl;
}


void removeLista(int pos) {
    int i;
    if (pos<0 || pos >= contador) {
        cout << "posicao invalida" << endl;
        return;
    }
    for (i=pos;i<contador-1 ;i++)
        lista[i] = lista[i+1];
    contador--;
    cout << "valor removido" << endl;
}


void buscarLista(int valor){
    int i;
    for (i=0; i<TAM; i++) {
        if (lista[i]==valor) {
            cout << i << endl;
            return;
        }
    }
}


void imprime() {
    int i;
    for (i=0; i<contador; i++) {
        cout << lista[i] << endl;
    }
}


int main () {
    insereLista(1, 0);
    insereLista(2, 1);
    insereLista(3, 2);
    insereLista(4, 3);
    recuperaLista(2);
    removeLista(1);
    buscarLista(3);
    removeLista(0);
    imprime();
}
