cmake_minimum_required(VERSION 3.21)
project(visitante)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(visitante
        include/bus.hpp
        include/componenteEquipo.hpp
        include/disco.hpp
        include/equipo.hpp
        include/tarjeta.hpp
        include/visitanteEquipo.hpp
        include/visitantePrecio.hpp
        include/visitantePrecioDetalle.hpp
        include/bus.cpp
        include/componenteEquipo.cpp
        include/disco.cpp
        include/equipo.cpp
        include/main.cpp
        include/tarjeta.cpp
        include/visitanteEquipo.cpp
        include/visitantePrecio.cpp
        include/visitantePrecioDetalle.cpp)
