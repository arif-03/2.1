import numpy as np

MR1 = [[1,1,1],
       [0,1,1],
       [0,1,0]]

MR2 = [[1,0,0],
       [0,1,1],
       [1,1,0]]

intersection= np.bitwise_and(MR1,MR2)
x_or = np.bitwise_xor(MR1,MR2)

print(intersection)
print(x_or)