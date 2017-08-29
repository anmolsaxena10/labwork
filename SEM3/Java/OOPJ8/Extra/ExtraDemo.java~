import java.io.*;

class SampleException extends Exception{
	SampleException(String name){
		super(name);
	}
}

class Parent{
	public void sampleMethod(){
		System.out.println("Parent");
	}
}

class Child extends Parent{
	public void sampleMethod() throws IOException{
		System.out.println("Child");
		//throw new IOException("Thrown from child");
	}
}

class ExtraDemo{
	public static void main(String args[]){
		Parent p = new Parent();
		Child c = new Child();
		
		p.sampleMethod();
		try{
			c.sampleMethod();
		}
		catch(IOException e){
			System.out.println(e);
		}
	}
}
