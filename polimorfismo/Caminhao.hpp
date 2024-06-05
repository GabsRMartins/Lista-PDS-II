#ifndef CAMINHAO
#define CAMINHAO

#include "Veiculo.hpp"
#include <string>

using std::string;

class Caminhao : public Veiculo {
private:
int m_eixos;
public:
Caminhao( string marca,  string modelo, int capacidade, int eixos);
void exibirDados() override ;
};

#endif