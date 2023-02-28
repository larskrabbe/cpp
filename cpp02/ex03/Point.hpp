
#ifndef CLASS_Point
# define CLASS_Point

class Point
{
	private:
		const float		x;
		const float		y;
	public:
		Point(float x = 0, float y =0);
		Point(const Point &a);
		~Point();
		Point &operator= (const Point& a);
};

#endif

