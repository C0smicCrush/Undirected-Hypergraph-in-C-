#include "main.h"
int main(){
	Hypergraph hyper;
	std::cout << hyper.addEdge(1);
	std::cout << hyper.addEdge(1);

	std::cout << hyper.addVertex(1);
	std::cout << hyper.addVertex(1);

	std::cout << hyper.addVertextoEdge(1,1);
	std::cout << hyper.addVertextoEdge(1,1);
	std::cout << hyper.removeEdge(2);
	std::cout << hyper.removeVertexfromEdge(1,1);	
	std::cout << hyper.removeVertexfromEdge(1,2);
	for(int a =0 ;a < 10;a++){
		hyper.addVertex(a);
		hyper.addEdge(a);
	}
	return 0;
}
