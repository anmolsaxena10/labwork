class Student extends Person{
	String branch;
	
	Student(){
		super();
		branch = null;
	}
	
	Student(String fullName, String branch){
		super(fullName);
		this.branch = branch;
	}
	
	String getBranch(){
		return(branch);
	}
	
	String getDescription(){
		return("Student with name : "+fullName+" Studying in : "+branch);
	}
	
	void setBranch(String branch){
		this.branch = branch;
	}
}
