# Function to compute the matrix union of two matrices


def matrix_intersection(matrix1, matrix2):
    union_result = [[matrix1[i][j] and matrix2[i][j]
                     for j in range(len(matrix1[0]))] for i in range(len(matrix1))]
    return union_result

# Function to compute the matrix ex OR-of two matrices


def matrix_x_or(matrix1, matrix2):
    xor_result = [[matrix1[i][j] ^ matrix2[i][j]
                   for j in range(len(matrix1[0]))] for i in range(len(matrix1))]
    return xor_result


# Given matrices
R1 = [[1, 1, 1],
      [0 ,1 ,1],
      [0, 1, 0]]

R2 = [[1, 0, 0],
      [0, 1, 1],
      [1, 1, 0]]

# Finding result of matrix union and matrix x-or for two given matrices using defined function 
MR1_intersection_R2 = matrix_intersection(R1, R2)
Mr1_xor_Mr2 = matrix_x_or(R1, R2)

# Print the results
print("First Matrix,R1 =", R1)
print("Second Matrix,R2 =", R2)
print("Rows =", len(R1), "Cols =", len(R1[0]))

print("Matrix intersection (MR1 U MR2) =", MR1_intersection_R2)
print("Matrix X_OR = ",Mr1_xor_Mr2)

