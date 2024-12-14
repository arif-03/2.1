A = {0, 1, 2, 3, 4, 5,6}


R1 = [(a, b) for a in A for b in A if b != 0 and a%b == 0]

# Relation R2: {(a, b) | a ≤ b}
R2 = [(a, b) for a in A for b in A if a <= b]

print("Relation R1:")
for i in R1:
    print(i)

print("\nRelation R2:")
for pair in R2:
    print(pair)
