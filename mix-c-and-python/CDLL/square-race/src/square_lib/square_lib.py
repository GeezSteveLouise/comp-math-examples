from ctypes import *
import os
os.chdir(os.path.dirname(__file__))

SO_c_square_lib = "./c_square_lib.so"

CDLL_c_square_lib = CDLL(SO_c_square_lib)

def sequence_squares(start, stop, bool_print=False):
    CDLL_c_square_lib.sequence_squares.argtypes = [c_ulonglong, c_ulonglong, c_int]
    CDLL_c_square_lib.sequence_squares(start, stop, 1 if bool_print else 0)

def flat_squares(start, stop, bool_print=False):
    CDLL_c_square_lib.flat_squares.argtypes = [c_ulonglong, c_ulonglong, c_int]
    CDLL_c_square_lib.flat_squares(start, stop, 1 if bool_print else 0)

