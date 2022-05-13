#ifndef HYPERGRAPH_H
#define HYPERGRAPH_H
#include <iostream>
#include <vector>
#include <queue>
#include <string>

class Hypergraph{
	private:
		vector<vector<int>> edgeLists;
		vector<int> adjVertices;
		vector<int> adjEdges;
	public:
		bool addEdge(string);
		bool addVertex(int);
		bool addVertextoEdge(int, int);
		
}

#endif

