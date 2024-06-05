#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "Funcionário.hpp"

class Estagiario : public Funcionário{
    private:
    double m_salarioEstag;

    public:
    Estagiario(string nome, int id, double salarioBase,double salarioEstag);
    double calcularSalarioTotal() override;
    ~Estagiario();

}
;


#endif