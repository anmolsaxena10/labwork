import MinMax.min;
class Driver{
	public static void main(String args[]){
		int a[] = {2,5,32,7,56,32,12};
		MinMax minmax = new MinMax();
		
		System.out.println("Minimum is "+minmax.min(a));
		System.out.println("Maximum is "+minmax.max(a));
	}
}
