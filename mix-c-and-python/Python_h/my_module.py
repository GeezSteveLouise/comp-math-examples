import ctypes

my_module = ctypes.CDLL("./my_module.so")
my_module.my_function.restype = ctypes.c_char_p
result = my_module.my_function()
print(result.decode("utf-8"))