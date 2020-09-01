#include <iostream>

using namespace std;

const int TAM = 10;
int lista[TAM];
int contador = 0;


void insereLista(int valor, int pos) {
    int i;
    if (contador == TAM) {
        cout << "LISTA CHEIA!" << endl;
        return;
    }
    if (pos<0 || pos>contador) {
        cout << "Posição inválida!" << endl;
        return;
    }
    if (valor < 0) {
        cout << "Número inválido, o valor precisa ser positivo!" << endl;
        return;
    }
    for (i=contador; i>pos; i--)
        lista[i] = lista[i-1];
    lista[pos] = valor;
    contador++;
    cout << "Valor INSERIDO com sucesso!" << endl;
}


void recuperaLista(int pos) {
    if (pos<0 || pos >= contador) {
        cout << "Posicao inválida!" << endl;
        return;
    }
    cout << "O valor que está na posição " << pos << " é " << lista[pos] <<endl;
}


void removeLista(int pos) {
    int i;
    if (pos<0 || pos >= contador) {
        cout << "Posicao inválida!" << endl;
        return;
    }
    for (i=pos;i<contador-1 ;i++)
        lista[i] = lista[i+1];
    contador--;
    cout << "Valor REMOVIDO com sucesso!" << endl;
}


void buscarLista(int valor){
    int i;
    for (i=0; i<TAM; i++) {
        if (lista[i]==valor) {
            cout << "O valor " << valor << " está na posição " << i+1 << endl;
            return;
        }
    }
}

void maiores_10() {
    int i, cont=0;
    cout << "Números maiores que 10: " << endl;
    for (i=0;i<contador;i++) {
        if (lista[i] > 10) {
            cont++;
            cout << lista[i] << " ";
        }
    }
    cout << endl;
    cout << cont << " número(s) maior(es) que 10" << endl;
}

void imprime() {
    int i;
    for (i=0; i<contador; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}


int main () {
    insereLista(1, 0);
    insereLista(2, 1);
    insereLista(3, 2);
    insereLista(4, 3);
    insereLista(5, 4);
    insereLista(6, 5);
    insereLista(7, 6);
    insereLista(11, 7);
    insereLista(16, 8);
    imprime();
    maiores_10();
    recuperaLista(2);
    removeLista(4);
    buscarLista(7);
    removeLista(0);
    imprime();
}
