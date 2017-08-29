class Shape{
	double area;	
	
	void findArea(){ area=0;}
	void showArea(){
		System.out.println(area);
	}
	String toString1(){
		return("Shape is Undefined");
	}
}

class Circle extends Shape{
	double radius;
	
	Circle(double r){
		radius = r;
	}
	
	void setRadius(double r){
		radius = r;
	}
	
	double getRadius(){
		return(radius);
	}
	
	void findArea(){
		area = (3.14*radius*radius);
	}
	
	String toString1(){
		return("Circle of radius "+radius);
	}
}

class Rectangle extends Shape{
	double length,breadth;
	
	Rectangle(double l,double w){
		length = l;
		breadth = w;
	}
	
	void setLength(double r){
		length = r;
	}
	
	double getLength(){
		return(length);
	}
	
	void setBreadth(double r){
		breadth = r;
	}
	
	double getBreadth(){
		return(breadth);
	}
	
	void findArea(){
		area = (length*breadth);
	}
	
	String toString1(){
		return("Rectangle of length "+length+" and breadth "+breadth);
	}
}

class Square extends Rectangle{
	
	Square(double l){
		super(l,l);
	}
	
	String toString1(){
		return("Square of length "+length);
	}
}
