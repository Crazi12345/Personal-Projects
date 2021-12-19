cmake_minimum_required(VERSION 3.20)
project(Chess)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chess main.cpp Board.cpp header/Board.h Piece.cpp header/Piece.h Game.cpp header/Game.h Pawn.cpp header/Pieces/Pawn.h King.cpp header/Pieces/King.h Queen.cpp header/Pieces/Queen.h Bishop.cpp header/Pieces/Bishop.h Rook.cpp header/Pieces/Rook.h Knight.cpp header/Pieces/Knight.h)
