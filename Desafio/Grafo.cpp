#include "Grafo.hpp"
#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

Grafo::Grafo(int vertices, const vector<pair<int, int>>& arestas){
    m_vertices = vertices;
    m_arestas = arestas;
}

void Grafo::criarMatrizAdjacencia(){
 
    vector<vector<int>> matriz(m_vertices, vector<int>(m_vertices, 0));

 
    for (const auto& aresta : m_arestas) {
        int u = aresta.first;
        int v = aresta.second;
        matriz[u][v] = 1;
        matriz[v][u] = 1;
    }


    for (const auto& linha : matriz) {
        for (int valor : linha) {
            cout << valor << " ";
        }
        cout << endl;
    }
}

bool Grafo::Vizinhos(int u, int v) {
    if(  u < m_vertices &&  v < m_vertices){

    for (const auto& aresta : m_arestas) {
        if ((aresta.first == u && aresta.second == v) || (aresta.first == v && aresta.second == u)) {
             cout << "Os vértices " << u << " e " << v << " são vizinhos." << endl;
             return true;
            
        }
    }
     cout << "Os vértices " << u << " e " << v << " não são vizinhos." << endl;
     return false;
    }
      cout << "Os vertices informados superam os vertices do grafo" << endl;
      return false;
}

void Grafo::VerticesVizinhos(int u) {
    vector<int> resultado;
  
    for (const auto& aresta : m_arestas) {
        if (aresta.first == u) {
            resultado.push_back(aresta.second);
        } else if (aresta.second == u) {
            resultado.push_back(aresta.first);
        }
    }
 cout << "Vizinhos do vértice " << u << ": ";
    for (int vizinho : resultado) {
        cout << vizinho << " ";
    }
    cout << endl;
}

