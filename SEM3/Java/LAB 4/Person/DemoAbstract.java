class DemoAbstract{
	public static void main(String args[]){
		
		Employee person1 = new Employee("Manoj Pandey",50000);
		Student person2 = new Student("Rohini Dave","Computer Science");
		
		System.out.println(person1.getDescription());
		System.out.println(person2.getDescription());
	}
}
