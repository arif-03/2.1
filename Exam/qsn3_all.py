def intersection(mat1,mat2):
    inter= [[mat1[i][j] and mat2[i][j] for j in range(len(mat1[0]))] for i in range(len(mat1))]
    print("MR1 intersection MR2 : \n" , inter)

def x_or(mat1,mat2):
    x = [[mat1[i][j] ^ mat2[i][j] for j in range(len(mat1[0]))] for i in range(len(mat1))]
    print("MR1 xor MR2 : \n" , x)




MR1=[[1,1,1],
     [0,1,1],
     [0,1,0]]

MR2=[[1,0,0],
     [0,1,1],
     [1,1,0]]
intersection(MR1,MR2)
x_or(MR1,MR2)