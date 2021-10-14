#pragma once
class Bill
{
public:
	Bill();
	Bill(short x, short y);  /*, bool linebegin);*/
	Bill(const Bill& b);

	short getX() const;
	void setX(const short x);
	short getY()const;
	void setY(const short y);
	/*bool isLinebegin() const;*/

	Bill& operator = (const Bill& other);


	bool operator == (const Bill& rhs) const;



private:
	short _x;
	short _y;
	/*bool _linebegin;*/
};

