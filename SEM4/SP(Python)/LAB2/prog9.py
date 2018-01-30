# Creating empty list for maintaining the records
student_record = []

n = int(input('Total records: '))



# Reading n records
for i in range(0,n):
	# Creating temporary record dictionary
	record = {}
	record['student_id'] = int(input('Enter ID: '))
	record['name'] = str(input('Enter Name: '))
	record['age'] = int(input('Enter Age: '))
	record['percent'] = int(input('Enter Percentage: '))
	
	# Appending the temporary record to the list
	student_record.append(record)
	

print(student_record)
