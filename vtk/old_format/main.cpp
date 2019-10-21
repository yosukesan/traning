
#include <string>

#include "vtk.hpp"

int main()
{
    VTK<VTKReader> vtk;

    std::string filename;
    vtk.read(filename);

    return 0;
}
