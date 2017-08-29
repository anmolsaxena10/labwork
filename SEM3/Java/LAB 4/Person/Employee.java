class Employee extends Person{
	double salary;
	
	Employee(){
		super();
		salary = 0;
	}
	
	Employee(String fullName, double salary){
		super(fullName);
		this.salary = salary;
	}
	
	double getSalary(){
		return(salary);
	}
	
	String getDescription(){
		return("Employee name : "+fullName+" with salary : "+salary);
	}
	
	void setSalary(double salary){
		this.salary = salary;
	}
}
