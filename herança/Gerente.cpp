#include "Gerente.hpp"

Gerente::Gerente(string nome, int id, double salarioBase,double bonusAnual){
    m_nome = nome;
    m_id = id;
    m_salarioBase = salarioBase;
    m_bonusAnual = bonusAnual;
}


 double Gerente::calcularSalarioTotal() {
    double salarioTotal = m_bonusAnual + m_salarioBase;
    return salarioTotal;

}

Gerente::~Gerente()
{
}
