#ifndef VAN
#define VAN

#include "Veiculo.hpp"
#include <string>

using std::string;

class Van : public Veiculo {
private:
int m_passageiros;
public:
Van(string marca, string modelo, int capacidade, int passageiros);
void exibirDados() override;
};

#endif