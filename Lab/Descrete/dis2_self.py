A={1,2,3,4,5}
B={1,2,5}
R=[(a,b) for a in A for b in B if a>=b]

mat_R=[]
for a in A:
    row=[]
    for b in B:
        if (a,b) in R:
            row.append(1)
        else:
            row.append(0)
    mat_R.append(row)

for r in mat_R:
    print(r)
