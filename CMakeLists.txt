cmake_minimum_required(VERSION 3.21)
project(visitante)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(visitante
        include/componenteEquipo.h
        include/disco.h
        include/equipo.h
        include/tarjeta.h
        include/visitanteEquipo.h
        include/visitantePrecio.h
        include/visitantePrecioDetalle.h
        include/componenteEquipo.cpp
        include/disco.cpp
        include/equipo.cpp
        include/main.cpp
        include/tarjeta.cpp
        include/visitantePrecio.cpp
        include/visitantePrecioDetalle.cpp include/cliente.h include/bus.cpp include/bus.h)
