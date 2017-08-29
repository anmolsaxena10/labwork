class FinallyDemo{
	public static void main(String args[]){
		int c;
		
		try{
			c = 25/5;
		}
		catch(NullPointerException e1){
			System.out.println(e1);
		}
		finally{
			System.out.println("We are in finally 1");
		}
		
		try{
			c = 25/0;
		}
		catch(ArithmeticException e2){
			System.out.println(e2);
		}
		finally{
			System.out.println("We are in finally 2");
		}
		
		try{
			c = 25/0;
		}
		catch(NullPointerException e3){
			System.out.println(e3);
		}
		finally{
			System.out.println("We are in finally 3");
		}
		
	}
}
