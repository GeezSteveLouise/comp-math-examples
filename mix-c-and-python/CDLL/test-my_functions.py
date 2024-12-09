from ctypes import *

so_file = "/home/kellen/repos/comp-math-examples/mix-c-and-python/CDLL/my_functions.so"

my_functions = CDLL(so_file)

print(type(my_functions))
print(my_functions.square(10))

my_functions.natural_log_two.argtypes = [c_int]

print(my_functions.natural_log_two(400000000))

my_functions.natural_log_two.restype = c_double
print(my_functions.natural_log_two(400000000))
    
