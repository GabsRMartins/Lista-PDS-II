#include "FuncionarioRegular.hpp"


FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase){
    m_nome = nome;
    m_id = id;
    m_salarioBase = salarioBase;
}

 double FuncionarioRegular::calcularSalarioTotal() {
    return m_salarioBase;

}

FuncionarioRegular::~FuncionarioRegular()
{
}
