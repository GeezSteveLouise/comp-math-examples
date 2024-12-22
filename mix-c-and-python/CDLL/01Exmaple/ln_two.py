def taylor(x):
  i = 0
  for y in range(1,x+1):
    if y % 2 == 1:
      i += 1 / y
    else:
      i -= 1 / y
  return i

print(taylor(8))
print(taylor(400000000))
