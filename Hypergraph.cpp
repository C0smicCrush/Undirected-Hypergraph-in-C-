#include "Hypergraph.h"
#include <bits/stdc++.h>
Hypergraph::Hypergraph(){
	vertices = 0;
	edges = 0;
}

bool Hypergraph::addEdge(int intIn){
	bool added = 0;

	 if((edgeList.find(intIn) == edgeList.end())){
		vector<int> myVector; 
	 	edgeList[intIn] = myVector;
		added =1;
	 }
	 edges++;
	return added;
}
bool Hypergraph::addVertex(int intIn){
	bool added =0;
	if((find(adjVertices.begin(), adjVertices.end(), intIn)) == adjVertices.end()){
		added = 1; 
		adjVertices.push_back(intIn);
	}
	vertices++;
	return added;
}
bool Hypergraph::addVertextoEdge(int vert, int edg){
	bool added = 0;
	if((edgeList.find(edg) != edgeList.end())){
		if(!((find(adjVertices.begin(), adjVertices.end(), vert)) == adjVertices.end())){
			auto test = find(edgeList[edg].begin(), edgeList[edg].end(), vert);
			if(test == edgeList[edg].end()){
			added = 1;
			edgeList[edg].push_back(vert);
			}
		}
	}
	return added;
}
void Hypergraph::printEdge(int intIn){
	if((edgeList.find(intIn) == edgeList.end())){
		std::cout << "Invalid Index!";
	}
	else{
		for(int a =0; a < edgeList[intIn].size(); a++){
			std::cout << edgeList[intIn][a] << " ";
		}
	}

	std::cout << std::endl;
}
Hypergraph::~Hypergraph(){
	edgeList.clear();
	adjVertices.clear();
	edges = 0;
	vertices = 0;
}
bool Hypergraph::removeEdge(int intIn){
	bool outret = 0;
	int holding = edgeList.size();
	edgeList.erase(intIn);
	if(holding != edgeList.size()){
		outret = 1;		
	}
	edges--;
	return outret;
}

bool Hypergraph::removeVertex(int intIn){
	bool outret =0;
	if (!(find(adjVertices.begin(), adjVertices.end(), intIn) == adjVertices.end())){
	for(auto e : edgeList){
		int size = e.second.size();
		for(int a = 0; a < size; a++){
			if(e.second[a]== intIn){
				e.second.erase(e.second.begin() + a);
				outret = 1;
				break;
				}
			}
		}
	}
	return outret;
}
