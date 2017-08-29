class TestThread implements Runnable{
	Thread t;
	String name;
	
	TestThread(String name){
		this.name = name;
		t = new Thread(this,name);
		t.start();
	}
	
	public void run(){
		try{
			for(int i=1 ; i<=5 ; i++){
				System.out.println(name+" : "+i);
				t.sleep(200);
			}
		}
		catch(InterruptedException e){
			System.out.println(e);
		}
	}
}
