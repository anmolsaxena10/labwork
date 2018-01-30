# Creating empty list for maintaining the records
student_record = []

n = int(input('Total records: '))

# Creating temporary record dictionary
record = {}

# Reading n records
for i in range(0,2):
	record['student_id'] = int(input('Enter ID: '))
	record['name'] = str(input('Enter Name: '))
	record['age'] = int(input('Enter Age: '))
	record['percent'] = int(input('Enter Percentage: '))
	
	# Appending the temporary record to the list
	student_record.append(record)
	
removeName = str(input('Enter name of student to be deleted: '))

# Loop for searching required student name
for i in range(0,len(student_record)):
	if(student_record[i]['name'] == removeName):
		# Removing the enry
		student_record.pop(i)
		break

print(student_record)