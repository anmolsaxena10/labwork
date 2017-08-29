class Line implements RelationInterface{
	double x1,x2,y1,y2;
	
	public Line(){
		x1 = -1;
		x2 = -1;
		y1 = -1;
		y2 = -1;
	}
	
	public Line(double x1,double x2,double y1,double y2){
		this.x1 = x1;
		this.x2 = x2;
		this.y1 = y1;
		this.y2 = y2;
	}
	
	public double getLength(){
		double length = Math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		return(length);
	}
	
	public boolean isGreater(Line l){
		if(this.getLength() > l.getLength()){
			return(true);
		}
		else{
			return(false);
		}
	}
	
	public boolean isLess(Line l){
		if(this.getLength() < l.getLength()){
			return(true);
		}
		else{
			return(false);
		}
	}
	
	public boolean isEqual(Line l){
		if(this.getLength() == l.getLength()){
			return(true);
		}
		else{
			return(false);
		}
	}
}
