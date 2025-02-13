# Nome do compilador
CXX = g++

# Flags do compilador
CXXFLAGS = -Wall -std=c++11

# Nome do executável
TARGET = lista_sequencial

# Arquivos fonte
SRCS = lista_sequencial.cpp

# Arquivos objeto
OBJS = $(SRCS:.cpp=.o)

# Regra padrão
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) -o $@ $^

# Regra para criar os arquivos objeto
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos objeto e executável
clean:
    rm -f $(OBJS) $(TARGET)

# Regra para rodar o programa
run: $(TARGET)
    ./$(TARGET)
