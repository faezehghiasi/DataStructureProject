#include "BasicNode.h"
bool BasicNode::operator==( BasicNode b) {
	if (this->coordinates == b.coordinates)return true;//if two node has same coordinates they are one node
	return false;
}
