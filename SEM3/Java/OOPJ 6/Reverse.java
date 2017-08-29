import java.util.Scanner;

class Reverse{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		String s = sc.nextLine();
		int l = s.length();
		int i = l-1,prev=l;
		String tempS = "";
		
		while(i>=0){
			if(s.charAt(i) == ' '){
				tempS = tempS + s.substring(i+1,prev) + " ";
				prev = i;
			}
			i--;
		}
		tempS = tempS + s.substring(i+1,prev) + " ";
		
		System.out.println(tempS);
	}
}
