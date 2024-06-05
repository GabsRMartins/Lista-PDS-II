#ifndef FUNCIONARIO
#define FUNCIONARIO  

#include "iostream"
#include <string>

using std::string;


class Funcionário
{
protected:
    string m_nome;
    int m_id;
    double m_salarioBase;
public:
    Funcionário();
    virtual double calcularSalarioTotal() = 0;
    ~Funcionário();
};


#endif