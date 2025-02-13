# Lista-sequencial

Este projeto implementa uma lista sequencial em C++ com várias operações básicas, como criação, inserção, remoção, modificação e verificação de elementos. A lista sequencial é uma estrutura de dados que armazena elementos em um vetor de tamanho fixo.

## Funcionalidades

- **Criação da lista vazia**: Inicializa uma lista vazia.
- **Verificar se a lista está vazia**: Retorna `true` se a lista estiver vazia, caso contrário, `false`.
- **Verificar se a lista está cheia**: Retorna `true` se a lista estiver cheia, caso contrário, `false`.
- **Obter o tamanho da lista**: Retorna o número de elementos na lista.
- **Obter o valor do elemento de uma determinada posição**: Retorna o valor do elemento na posição especificada.
- **Modificar o valor do elemento de uma determinada posição**: Modifica o valor do elemento na posição especificada.
- **Inserir um elemento em uma determinada posição**: Insere um novo elemento na posição especificada.
- **Retirar um elemento de uma determinada posição**: Remove o elemento na posição especificada.
- **Imprimir a lista**: Exibe todos os elementos da lista.

## Como compilar e executar

### Usando Makefile

1. Certifique-se de ter o compilador `g++` instalado.
2. Navegue até o diretório do projeto.
3. Execute o comando `make` para compilar o projeto.
4. Execute o comando `make run` para compilar e executar o programa.
5. Para limpar os arquivos objeto e o executável, use `make clean`.

### Manualmente

1. Compile o arquivo `lista_sequencial.cpp` usando o comando:
   ```sh
   g++ -Wall -std=c++11 -o lista_sequencial lista_sequencial.cpp
