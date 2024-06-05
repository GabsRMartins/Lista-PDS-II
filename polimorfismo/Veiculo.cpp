#include "Veiculo.hpp"

Veiculo::Veiculo(string marca, string modelo, int capacidade)
{
      m_marca= marca;
      m_modelo = modelo;
      m_capacidade = capacidade;

}


void Veiculo::exibirDados() 
 { 
    std::cout << "Marca: " << m_marca << ", Modelo: " << m_modelo << ", Capacidade: " << m_capacidade << " toneladas\n";
 }