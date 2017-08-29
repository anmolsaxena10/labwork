import java.util.Scanner;

class SubString{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		String s = sc.nextLine();
		String sub = sc.nextLine();
		
		int count = 0,i;
		i = s.indexOf(sub);
		
		String tempS = s.substring(i+1);
		i++;
		
		while(i != 0){
			count++;
			i = tempS.indexOf(sub);
			tempS = tempS.substring(i+1);
			i++;
		}
		
		System.out.println(count);
	}
}
