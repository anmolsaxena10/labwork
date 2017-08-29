class CompareLines{
	public static void main(String args[]){
		Line a = new Line(1,1,2,2);
		Line b = new Line(2,2,3,3);
		
		if(a.isGreater(b))
		{
			System.out.println("a is greater than b");
		}
		else if(a.isLess(b)){
			System.out.println("a is less than b");
		}
		else if(a.isEqual(b)){
			System.out.println("a is equal to b");
		}
	}
}
