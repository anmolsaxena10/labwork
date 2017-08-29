import java.util.Scanner;

class Student{
	int roll_no;
	String name;
	int marks[] = new int[5];
	Scanner scan = new Scanner(System.in);
		
	void setRoll(){
		roll_no = scan.nextInt();
	}
	
	void setName(){
		name = scan.nextLine();
	}
	
	int getRoll(){
		return(roll_no);
	} 
	String getName(){
		return(name);
	}
	
	void setMarks(){
		for(int i=0;i<marks.length;i++){
			marks[i] = scan.nextInt();
		}
	}
	
	int getMarks(int i){
		return(marks[i]);
	}
	
	float findAvg(){
		float sum=0;
		for(int i=0;i<marks.length;i++){
			sum += marks[i];
		}
		return(sum/marks.length);
	}
}

public class Info{
	public static void main(String args[]){
		Scanner scan = new Scanner(System.in);
		
		Student stu1 = new Student();
		
		System.out.println("Enter name of first student : ");
		stu1.setName();
		
		System.out.println("Enter roll no of first student : ");
		stu1.setRoll();
		
		System.out.println("Enter marks of first student : ");
		stu1.setMarks();
		
		System.out.println("Name : "+stu1.getName());
		System.out.println("Roll : "+stu1.getRoll());
		for(int i=0;i<5;i++){
			System.out.println("Marks : "+stu1.getMarks(i));
		}
		System.out.println("Average : "+stu1.findAvg());
		
		
		
		Student stu[] = new Student[3];
		stu[0] = new Student();
		stu[1] = new Student();
		stu[2] = new Student();
		
		for(int i=0;i<stu.length;i++){
			System.out.println("Enter name of "+(i+1)+" student : ");
			stu[i].setName();
		
			System.out.println("Enter roll no of "+(i+1)+" student : ");
			stu[i].setRoll();
		
			System.out.println("Enter marks of "+(i+1)+" student : ");
			stu[i].setMarks();
			
		}
		
		int max=0;
		for(int i=1;i<stu.length;i++){
			if(stu[max].findAvg()<stu[i].findAvg()){max=i;}
		}
		
		System.out.println("Student with highest Average : ");
		System.out.println("Name : "+stu[max].getName());
		System.out.println("Roll : "+stu[max].getRoll());
		for(int j=0;j<5;j++){
			System.out.println("Marks : "+stu[max].getMarks(j));
		}
		System.out.println("Average : "+stu[max].findAvg());
	}
}
