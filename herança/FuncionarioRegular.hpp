#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR

#include "Funcionário.hpp"

class FuncionarioRegular : public Funcionário{
    public:
    FuncionarioRegular(string nome, int id, double salarioBase);
    double calcularSalarioTotal() override;
      ~FuncionarioRegular();

}
;


#endif