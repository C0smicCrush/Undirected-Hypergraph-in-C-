#ifndef HYPERGRAPH_H
#define HYPERGRAPH_H
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <unordered_map>
using std::vector;
using std::unordered_map;

class Hypergraph{
	private:
		int getInputLocation(int,int);
		unordered_map <int,  vector<int>> edgeList;
		vector<int> adjVertices;
		int binarySearch(int, int);
		int edges;
		int vertices;
		void testfunc();

	public:
		Hypergraph();
		bool addEdge(int);
		bool addVertex(int);
		bool addVertextoEdge(int, int);
		void printEdge(int);
		~Hypergraph();
		bool removeEdge(int);
		bool removeVertex(int);
		bool removeVertexfromEdge(int, int);
		

};

#endif

