#include "Hypergraph.h"
Hypergraph::Hypergraph(){
	vertices = 0;
	edges = 0;
}
bool Hypergraph::addEdge(int edgeAdd){
	bool added = 0;
	if(!std::binary_search (adjEdges.begin(), adjEdges.end(), edgeAdd) && edgeAdd > 0){
		added = 1;
		int loc  = getInputLocation(edgeAdd, 0);
		vector<int> test = {};
		adjEdges.insert(adjEdges.begin()+loc, edgeAdd);
		
		edgeLists.insert(edgeLists.begin()+loc, test);
		
	}
	return added;
	
	
}
int Hypergraph::getInputLocation(int intIn, int check){   //Second integer determines if its for edges or vertices
													  // 0 is for edges and 1 is for vertices
	int ret = 0;//ret is the location to be returned
	if(check == 0){
		if(adjEdges.size() > 0){
			for(int x = 0; x < edges; x++){
				if(adjEdges[x] < 0){
					ret++;
				}
			}
		}
	}
	else{
		if(adjVertices.size() > 0){
			for(int x = 0; x < edges; x++){
				if(adjEdges[x] < 0){
					ret++;
				}
			}
		}
	}
	return ret;
	
}
void Hypergraph::testfunc(){
	std::cout << edgeLists.size();
	std::cout << edgeLists[0].size();
}



//void Hypergraph::printEdge(int edgeIn){
//	if (edgeIn > 0){
//		int loc = getInputLocation(edgeIn,0);
//		for(int x =0; x < );
//	}
//}

//int Hypergraph::binarySearch(int intIn, int checker){ //Second integer determines if its for edges or vertices
//													  // 0 is for edges and 1 is for vertices
//	int left = 0;
//	int right = 
//}
