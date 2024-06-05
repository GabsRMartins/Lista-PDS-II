#include "iostream"
#include "Van.hpp"
#include "Caminhao.hpp"
#include "Veiculo.hpp"
#include <vector>



int main(){
       
    std::vector<Veiculo*> veiculos;
    Van f1("McLarren","m56445",100,8);
    Caminhao f2("Ford","f1",150,4);     
    Van f3("Ferrari","fe23w5",60,2);

    veiculos.push_back(&f1);
    veiculos.push_back(&f2);
    veiculos.push_back(&f3);

    for(auto& v : veiculos) {
         v->exibirDados();
    }

    return 0;
}