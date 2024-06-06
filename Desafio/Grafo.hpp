#ifndef GRAFO
#define GRAFO

#include <string>
#include <vector>
#include <utility>

using std::string;
using std::vector;
using std::pair;


class Grafo {
private:
int m_vertices;
vector<pair<int, int>> m_arestas;
public:
Grafo(int vertices, const vector<pair<int, int>>& arestas);
void criarMatrizAdjacencia();
bool Vizinhos(int u, int v);
void VerticesVizinhos(int u);
};

#endif