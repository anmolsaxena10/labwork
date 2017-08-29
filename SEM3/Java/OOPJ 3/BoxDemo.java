class BoxDemo{
	public static void main(String args[]){
		Box b1 = new Box();
		Box b2 = new Box(2,3,4);
		Box b3 = new Box(3);
		Box b4 = new Box(b2);
		
		b1.length = 5;
		b1.height = 6;
		b1.depth = 7;
		
		System.out.println(b1.findVolume());
		System.out.println(b2.findVolume());
		System.out.println(b3.findVolume());
		System.out.println(b4.findVolume());
	}
}