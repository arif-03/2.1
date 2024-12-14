s={0,1,2,3,4,5}

R1=[(a,b) for a in s for b in s if a!=0 and b%a==0]
R2=[(a,b) for a in s for b in s if b>=a]
print(R1)
print(R2)