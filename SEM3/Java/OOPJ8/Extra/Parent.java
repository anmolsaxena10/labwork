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
	public void sampleMethod() throws SampleException{
		System.out.println("Child");
		throw new SampleException("Thrown from child");
	}
}

class ExtraDemo{
	
}
