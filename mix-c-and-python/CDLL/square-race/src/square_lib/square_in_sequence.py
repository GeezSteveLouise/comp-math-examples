from ctypes import *
import os
os.chdir(os.path.dirname(__file__))

SO_c_square_lib = "./c_square_lib.so"

CDLL_c_square_lib = CDLL(SO_c_square_lib)

def print_sequence_squares(start, stop):
    CDLL_c_square_lib.print_sequence_squares.argtypes = [c_int, c_int]
    CDLL_c_square_lib.print_sequence_squares(start, stop)

# my_functions.natural_log_two.argtypes = [c_int]

# print(my_functions.natural_log_two(400000000))

# my_functions.natural_log_two.restype = c_double
# print(my_functions.natural_log_two(400000000))
    