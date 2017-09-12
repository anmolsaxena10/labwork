import java.util.Scanner;

class CustomExceptionDemo{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		try{
			validate(sc.nextInt());
		}
		catch(InvalidAgeException e){
			System.out.println(e);
		}
	}
	
	static void validate(int age) throws InvalidAgeException{
		if(age < 18){
			throw new InvalidAgeException("Invalid Age");
		}
	}
}
