import java.util.Scanner;

class ArithmeticExDemo{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter two numbers :");
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c;
		try{
			c = a/b;
		}
		catch(ArithmeticException e){
			c=0;
		}
		System.out.println(c);
	}
}
