#include "Ocean.h"

void Ocean::setName(string N)
{
	name = N;
}
void Ocean::setDeep(float D)
{
	deep = D;
}
void Ocean::setSize(float S)
{
	size = S;
}


ostream& operator<<(ostream& stream, Ocean obj)
{
	stream << obj.name << " океан; ";
	stream << "глубина: " << obj.deep << "м; ";
	stream << "размер: " << obj.size << "тыс км2";

	return stream;
}