#include "Van.hpp"
#include "iostream"

#include <string>
using std::string;

Van::Van(string marca,  string modelo, int
capacidade, int passageiros)  : Veiculo(marca, modelo, capacidade), m_passageiros(passageiros) {}

void Van::exibirDados(){
 std::cout << "Van - ";
 Veiculo::exibirDados();
 std::cout << "Passageiros: " << m_passageiros << "\n";
 }