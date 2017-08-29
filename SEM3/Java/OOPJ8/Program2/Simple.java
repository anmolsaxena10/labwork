import java.io.IOException;
class Simple{
	public void m() throws IOException{
		throw new IOException("Device Error");
	}
	
	public void n() throws IOException{
		m();
	}
	
	public void p(){
		try{
			n();
		}
		catch(IOException e){
			System.out.println(e);
		}
	}
}

class SimpleDemo{
	public static void main(String args[]){
		new Simple().p();
	}
}
