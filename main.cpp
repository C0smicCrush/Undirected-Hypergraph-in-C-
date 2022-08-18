#include "main.h"
using std::cout;
int main(){
	Hypergraph hyper;
	cout << hyper.addEdge(1);
	cout << hyper.addEdge(1);

	cout << hyper.addVertex(1);
	cout << hyper.addVertex(1);

	cout << hyper.addVertextoEdge(1,1);
	cout << hyper.addVertextoEdge(1,1);
	cout << hyper.removeEdge(2);
	cout << hyper.removeVertexfromEdge(1,1);	
	cout << hyper.removeVertexfromEdge(1,2);
	for(int a =0 ;a < 10;a++){
		hyper.addVertex(a);
		hyper.addVertex(a);
		hyper.addEdge(a);
		cout << hyper.returnEdges() << " ";
		hyper.addEdge(a);
		cout << hyper.returnEdges() << " ";

	}
//	cout << hyper.returnEdges()<< " ";
//	cout << hyper.returnVertices();
	return 0;
}
