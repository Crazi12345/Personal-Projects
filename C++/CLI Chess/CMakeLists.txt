cmake_minimum_required(VERSION 3.20)
project(Chess)

set(CMAKE_CXX_STANDARD 14)

include_directories(Chess)

add_executable(Chess
        Chess/Bishop.cpp
        Chess/Bishop.h
        Chess/Board.cpp
        Chess/Board.h
        Chess/Game.cpp
        Chess/Game.h
        Chess/King.cpp
        Chess/King.h
        Chess/Knight.cpp
        Chess/Knight.h
        Chess/main.cpp
        Chess/Pawn.cpp
        Chess/Pawn.h
        Chess/Piece.cpp
        Chess/Piece.h
        Chess/Queen.cpp
        Chess/Queen.h
        Chess/Rook.cpp
        Chess/Rook.h)
