#ifndef HYPERGRAPH_H
#define HYPERGRAPH_H
#include <iostream>
#include <vector>
#include <queue>
#include <string>

class Hypergraph{
	private:
		int getInputLocation(int,int);
		vector<vector<int>> edgeLists;
		vector<int> adjVertices;
		vector<int> adjEdges;
		int binarySearch(int, int);
		int edges;
		int vertices;
	public:
		bool addEdge(int);
		bool addVertex(int);
		bool addVertextoEdge(int, int);
		
}

#endif

