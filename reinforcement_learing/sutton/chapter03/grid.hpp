
#include <memory>

template <typename T>
class Grid
{
	std::unique_ptr<T> value;
};
