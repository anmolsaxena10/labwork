class MinMax{

	int min(int a[]){
		int min=0;
		for(int i=1;i<a.length;i++){
			if(a[min]>a[i]){
				min = i;
			}
		}
		return(a[min]);
	}
	
	int max(int a[]){
		int max=0;
		for(int i=1;i<a.length;i++){
			if(a[max]<a[i]){
				max = i;
			}
		}
		return(a[max]);
	}
}

class Driver{
	public static void main(String args[]){
		int a[] = {2,5,32,7,56,32,12};
		MinMax minmax = new MinMax();
		
		System.out.println("Minimum is "+minmax.min(a));
		System.out.println("Maximum is "+minmax.max(a));
	}
}
