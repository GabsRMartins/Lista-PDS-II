#include "Caminhao.hpp"
#include "iostream"
#include <string>
using std::string;


Caminhao::Caminhao( string marca,  string modelo, int
capacidade, int eixos)  : Veiculo(marca, modelo, capacidade), m_eixos(eixos) {}

void Caminhao::exibirDados(){
 std::cout << "Caminhão - ";  Veiculo::exibirDados(); std::cout << "Eixos: " << m_eixos << "\n";
 }