cmake_minimum_required(VERSION 3.20)
project(Chess)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chess main.cpp Board.cpp Board.h Piece.cpp Piece.h Game.cpp Game.h Pawn.cpp Pawn.h King.cpp King.h Queen.cpp Queen.h Bishop.cpp Bishop.h Rook.cpp Rook.h Knight.cpp Knight.h)
