#include<cmath>

struct Point{
	int x, y;
	void set_1()
	{
		x = 1;
		y = 1;
	}

	Point operator+(const Point &p)const
	{
		Point result;
		result.x = x + p.x;
		result.y = y + p.y;
	}

	Point operator-(const Point &p)const
	{
		Point result;
		result.x = x - p.x;
		result.y = y - p.y;
	}

	Point operator*(const Point &p)const
	{
		Point result;
		result.x = x * p.x;
		result.y = y * p.y;
	}

	Point operator/(const Point &p)const
	{
		Point result;
		result.x = x / p.x;
		result.y = y / p.y;
	}

	void add(Point &p5, Point &p6)
	{
		p5.x = (p5.x) + (p6.x);
		p6.x = p5.x;
		p5.y = (p5.y) + (p6.y);
		p6.y = p5.y;
	}
	void set_zero(Point &p)
	{
		p.x = 0;
		p.y = 0;
	}
	bool set_zero_bool(const Point p)
	{
		return p.x == 0 && p.y == 0;
	}
	void setpoint(Point &p, int x, int y)
	{
		++x;

		p.x = x;
		p.y = y;

	}
	void setpointfrompoint(Point &p, Point &p2)
	{
		p.x = p2.x;
		p.y = p2.y;
	}
	float distance(Point &p3, Point &p2)
	{
		float x = 0, y = 0;
		x = (p2.x) - (p3.x);
		y = (p2.y) - (p3.y);
		return sqrt(((x)*(x)) + ((y)*(y)));
	}
	void swap(int &a, int &b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}


};

int main()
{
	float r = 0;
	Point p;
	Point p2;
	Point p3;
	p2.x = 2;
	p2.y = 2;
	p3.x = 7;
	p3.y = 7;
	
	p.set_zero(p);
	p.set_1();
	bool resut = p.set_zero_bool(p);
	p.setpoint(p, 8, 9);
	p.setpointfrompoint(p3, p2);
	r = p.distance(p2, p3);
	Point p5;
	Point p6;
	
	p.add(p5, p6);
	int a = 5;
	int b = 3;
	p.swap(a, b);
	return 0;
}