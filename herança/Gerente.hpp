#ifndef GERENTE
#define GERENTE

#include "Funcionário.hpp"

class Gerente : public Funcionário{
    private:
    double m_bonusAnual;

    public:
    Gerente(string nome, int id, double salarioBase,double bonusAnual);
    double calcularSalarioTotal() override;
    ~Gerente();

}
;


#endif