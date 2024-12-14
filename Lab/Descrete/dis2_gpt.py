X = {1,2,3, 4,5}
Y = {1,2,5}

R=[(a,b) for a in X for b in Y if a>=b]
print("Relation R:",R)

matrix_R = []

for x in X:
    row = []
    for y in Y:
        if (x, y) in R:
            row.append(1)
        else:
            row.append(0)
    matrix_R.append(row)

print("\nMatrix representation of R:")
for row in matrix_R:
    print(row)
