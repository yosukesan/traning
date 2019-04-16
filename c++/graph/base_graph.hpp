
#include <vector>

class Graph
{
	std::vector<size_t> node;

public:	
	explicit Graph();
	virtual ~Graph() = 0;
};

Graph::~Graph(){}
