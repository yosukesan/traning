
#pragma once

#include <string>
#include <cstdint>
#include <vector>

#include "vtk_reader.hpp"

template <typename Derived>
class VTK
{
    uint64_t num_vertices;
    uint64_t num_element;
    vector<uint64_t> *elems;
    vector<double> *coords;
public:
    bool read(const std::string& filename);
};

template class VTK<VTKReader>;
