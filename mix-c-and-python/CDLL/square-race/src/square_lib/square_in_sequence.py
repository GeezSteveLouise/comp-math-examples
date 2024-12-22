from ctypes import *
import os
os.chdir(os.path.dirname(__file__))

SO_c_square_lib = "./c_square_lib.so"

CDLL_c_square_lib = CDLL(SO_c_square_lib)

def print_sequence_squares(start, stop):
    CDLL_c_square_lib.print_sequence_squares.argtypes = [c_ulonglong, c_ulonglong]
    CDLL_c_square_lib.print_sequence_squares(start, stop)

def sequence_squares(start, stop):
    CDLL_c_square_lib.sequence_squares.argtypes = [c_ulonglong, c_ulonglong]
    CDLL_c_square_lib.sequence_squares(start, stop)

def print_flat_squares(start, stop):
    CDLL_c_square_lib.print_flat_squares.argtypes = [c_ulonglong, c_ulonglong]
    CDLL_c_square_lib.print_flat_squares(start, stop)

def flat_squares(start, stop):
    CDLL_c_square_lib.flat_squares.argtypes = [c_ulonglong, c_ulonglong]
    CDLL_c_square_lib.flat_squares(start, stop)

