#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 3

typedef struct {
    int vetor[MAX_SIZE];
    int tamanho;
} ListaSequencial;

// 1. Criação da lista vazia
void criarLista(ListaSequencial *lista) {
    lista->tamanho = 0;
    printf("Lista criada.\n");
}

// 2. Verificar se a lista está vazia
bool estaVazia(ListaSequencial *lista) {
    return lista->tamanho == 0;
}

// 3. Verificar se a lista está cheia
bool estaCheia(ListaSequencial *lista) {
    return lista->tamanho == MAX_SIZE;
}

// 4. Obter o tamanho da lista
int obterTamanho(ListaSequencial *lista) {
    return lista->tamanho;
}

// 5. Obter o valor do elemento de uma determinada posição
bool obterElemento(ListaSequencial *lista, int pos, int *valor) {
    if (pos < 1 || pos > lista->tamanho) return false;
    *valor = lista->vetor[pos - 1];
    return true;
}

// 5. Modificar o valor do elemento de uma determinada posição
bool modificarElemento(ListaSequencial *lista, int pos, int valor) {
    if (pos < 1 || pos > lista->tamanho) return false;
    lista->vetor[pos - 1] = valor;
    return true;
}

// 6. Inserir um elemento em uma determinada posição
bool inserirElemento(ListaSequencial *lista, int pos, int valor) {
    if (estaCheia(lista) || pos < 1 || pos > lista->tamanho + 1) return false;
    for (int i = lista->tamanho; i >= pos; --i) {
        lista->vetor[i] = lista->vetor[i - 1];
    }
    lista->vetor[pos - 1] = valor;
    lista->tamanho++;
    return true;
}

// 7. Retirar um elemento de uma determinada posição
bool removerElemento(ListaSequencial *lista, int pos) {
    if (pos < 1 || pos > lista->tamanho) return false;
    for (int i = pos - 1; i < lista->tamanho - 1; ++i) {
        lista->vetor[i] = lista->vetor[i + 1];
    }
    lista->tamanho--;
    return true;
}

// Função para imprimir a lista
void imprimirLista(ListaSequencial *lista) {
    for (int i = 0; i < lista->tamanho; ++i) {
        printf("%d ", lista->vetor[i]);
    }
    printf("\n");
}

int main() {
    ListaSequencial lista;
    criarLista(&lista);
    imprimirLista(&lista);

    printf("Verificando se a lista está vazia: %s\n\n", estaVazia(&lista) ? "Sim" : "Não");

    inserirElemento(&lista, 1, 10);
    printf("Inserido 10 na posição 1.\n\n");
    imprimirLista(&lista);

    inserirElemento(&lista, 2, 20);
    printf("Inserido 20 na posição 2.\n\n");
    imprimirLista(&lista);

    inserirElemento(&lista, 3, 30);
    printf("Inserido 30 na posição 3.\n\n");
    imprimirLista(&lista);

    printf("Tamanho da lista: %d\n\n", obterTamanho(&lista));
    if (estaCheia(&lista)) {
        printf("A lista está cheia.\n\n");
    } else {
        printf("A lista não está cheia.\n\n");
    }
    
    removerElemento(&lista, 2);
    printf("Removido elemento na posição 2.\n\n");
    imprimirLista(&lista);

    int valor;
    if (obterElemento(&lista, 1, &valor)) {
        printf("Elemento na posição 1: %d\n\n", valor);
    }

    modificarElemento(&lista, 1, 50);
    printf("Modificado elemento na posição 1 para 50.\n\n");
    imprimirLista(&lista);

    return 0;
}
