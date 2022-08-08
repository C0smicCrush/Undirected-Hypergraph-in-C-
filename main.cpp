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
	std::cout << hyper.removeEdge(1);
	return 0;
}
