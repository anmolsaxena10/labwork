class ShapeDemo{
	public static void main(String args[]){
		Shape sh = new Shape();
		Shape c = new Circle(10);
		Shape r = new Rectangle(5,10);
		Shape s = new Square(5);
		
		c.findArea();
		r.findArea();
		s.findArea();
		
		System.out.println(c.toString1());
		c.showArea();
		System.out.println(r.toString1());
		r.showArea();
		System.out.println(s.toString1());
		s.showArea();
	}
}
