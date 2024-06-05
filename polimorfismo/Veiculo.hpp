
#ifndef VEICULO
#define VEICULO

#include "iostream"
#include <string>
using std::string;

class Veiculo {
protected:
 string m_marca;
 string m_modelo;
 int m_capacidade; // Capacidade de carga em toneladas
public:
 Veiculo( string marca,  string modelo, int capacidade);
 virtual void exibirDados();
};

#endif