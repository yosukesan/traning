
#include "vtk_base.hpp"

template <typename Derived>
bool VTK<Derived>::read(const std::string& filename)
{
    return Derived::read(filename);
}
