from square_lib import square_lib

import time

start_seq = time.time()
square_lib.sequence_squares(0,10, True)
end_seq = time.time()

start_flat = time.time()
square_lib.flat_squares(0,10, bool_print=True)
end_flat = time.time()


print("sequence: " + str(1000*(end_seq - start_seq)) + "ms")
print("flat: " + str(1000*(end_flat - start_flat)) + "ms")

