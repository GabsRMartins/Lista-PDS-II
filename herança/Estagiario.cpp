#include "Estagiario.hpp"





Estagiario::Estagiario(string nome, int id, double salarioBase,double salarioEstag){
    m_nome = nome;
    m_id = id;
    m_salarioBase = salarioBase;
    m_salarioEstag = salarioEstag;
}


 double Estagiario::calcularSalarioTotal() {
    
    return m_salarioEstag;

}

Estagiario::~Estagiario()
{
}
