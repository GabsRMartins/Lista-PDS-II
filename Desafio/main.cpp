#include "Grafo.hpp"


int main() {
    int vertices = 5; 
    vector<pair<int, int>> arestas = { {0, 1}, {0, 4}, {1, 2}, {1, 3}, {1, 4}, {2, 3}, {3, 4}};
    Grafo grafo(vertices, arestas);

    grafo.criarMatrizAdjacencia();
    int u = 4, v=3;
    grafo.Vizinhos(u,v);
    grafo.VerticesVizinhos(u);  
    return 0;
}