maths = set([1,2,3,5,7,9])
physics = set([2,4,6,9])
chemistry = set([1,3,5,9])

print("Both maths and physics:")
print(maths|physics)

print("Both chemistry and physics:")
print(chemistry|physics)

print("Both maths and chemistry:")
print(maths|chemistry)

print("All maths, chemistry and physics:")
print(maths|physics|chemistry)

print("Exactly 1:")
print(maths^physics^chemistry)