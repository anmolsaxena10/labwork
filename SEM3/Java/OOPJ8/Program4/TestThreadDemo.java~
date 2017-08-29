import java.util.Scanner;

class TestThreadDemo{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		Thread t = Thread.currentThread();
		
		System.out.println("Name of main thread : "+t.getName());
		
		System.out.println("Enter name of thread 1 ");
		String name1 = sc.nextLine();
		
		System.out.println("Enter name of thread 2 ");
		String name2 = sc.nextLine();
		
		TestThread t1 = new TestThread(name1);
		TestThread t2 = new TestThread(name2);
		
		try{
			t1.t.join();
			t2.t.join();
		}
		catch(InterruptedException e){
			System.out.println(e);
		}
	}
}
