#include "iostream"
#include "Estagiario.hpp"
#include "Gerente.hpp"
#include "Funcionário.hpp"
#include "FuncionarioRegular.hpp"
#include <vector>



int main(){
       
    std::vector<Funcionário*> funcionarios;
    Estagiario f1("Gabriel",1,0,1500);
    Gerente f2("Rodrigo",2,3000,5000);     
    FuncionarioRegular f3("Naomy",3,3000);

    funcionarios.push_back(&f1);
    funcionarios.push_back(&f2);
    funcionarios.push_back(&f3);

    for(auto& f : funcionarios) {
        std::cout << "Salário Total: " << f->calcularSalarioTotal() << "\n";
    }

    return 0;
}