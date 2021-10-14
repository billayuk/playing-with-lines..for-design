#include "Bill.h"
Bill::Bill()
{
	_x = 0;
	_y = 0;
	/*_linebegin = false;*/
}

Bill::Bill(short x, short y) /*, bool linebegin)*/
{
	_x = x;
	_y = y;
	/*_linebegin = linebegin;*/
}

Bill::Bill(const Bill& b)
{
	_x = b._x;
	_y = b._y;
	/*_linebegin = b._linebegin;*/

}

short Bill::getX() const
{
	return _x;
}

void Bill::setX(const short x)
{
	_x = x;
}

short Bill::getY()const
{
	return _y;
}
void Bill::setY(const short y)
{
	_y = y;
}

//bool Bill::isLinebegin() const
//{
//	return _linebegin;
//}

Bill& Bill::operator=(const Bill& other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
		/*_linebegin = other._linebegin*/
	}

	return *this;
}

bool Bill::operator==(const Bill& other) const
{
	if (_x == other._x && _y == other._y)
	{
		return true;
	}
	else
	{
		return false;
	}
}