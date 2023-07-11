
#ifndef CLASS_RPN
# define CLASS_RPN

#include <queue>

class RPN
{
	private:
		std::queue<int> nums;
	public:
		RPN();
		RPN(const RPN &a);
		~RPN();
		RPN &operator= (const RPN& a);
};

#endif
