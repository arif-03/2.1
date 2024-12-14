def intersection(mat1,mat2):
    return [[mat1[i][j] and mat2[i][j] for j in range(len(mat1[0]))]for i in range(len(mat1))]
def x_or(mat1,mat2):
    return [[mat1[i][j] ^ mat2[i][j] for j in range(len(mat1[0]))] for i in range(len(mat1))]
MR1 = [[1,1,1],
       [0,1,1],
       [0,1,0]]

MR2 = [[1,0,0],
       [0,1,1],
       [1,1,0]]
MR1UMR2 = intersection(MR1,MR2)
print(MR1UMR2)
x=x_or(MR1,MR2)
print(x)

#print(MR1)