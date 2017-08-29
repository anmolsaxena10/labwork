class Box{
	double length;
	double height;
	double depth;
	
	Box(){
		length = -1;
		height = -1;
		depth = -1;
	}
	
	Box(double length, double height, double depth){
		this.length = length;
		this.height = height;
		this.depth = depth;
	}
	
	Box(double length){
		this.length = length;
		height = length;
		depth = length;
	}
	
	Box(Box box){
		length = box.length;
		height = box.height;
		depth = box.depth;
	}
	
	double findVolume(){
		return(length*height*depth);
	}
}
