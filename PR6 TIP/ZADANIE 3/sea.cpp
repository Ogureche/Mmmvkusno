#include "Sea.h"

void Sea::setName(string N)
{
	name = N;
}
void Sea::setDeep(float D)
{
	deep = D;
}
void Sea::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& stream, Sea obj)
{
	stream << obj.name << " море; ";
	stream << "глубина: " << obj.deep << "м; ";
	stream << "размер: " << obj.size << "тыс км2";

	return stream;
}