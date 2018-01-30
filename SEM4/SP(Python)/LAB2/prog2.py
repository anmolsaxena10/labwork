# storing names in list
names = ['ramu','shyamu','kanu','manu','ramu','radha','manu']

#Converting the list into a set to remove the redundant entries in the list
names = set(names)

# converting the set back to list
names = list(names)

# Loop for printing the names iteratively
for i in range(0,len(names)):
	print(names[i])