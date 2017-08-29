import java.util.Scanner;

class Palindrome{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		String s = sc.nextLine();
		
		int start=0,end=(s.length()-1);
		
		if(isPalindrome(s,start,end)){
			System.out.println("Palindrome");
		}
		else{
			System.out.println("Not Palindrome");
		}
	}
	
	static boolean isPalindrome(String s,int start,int end){
		
		if(start == end){
			return(true);
		}
		
		if(s.charAt(start) != s.charAt(end)){
			return(false);
		}
		
		if(start < end+1){
			return isPalindrome(s,start+1,end-1);
		}
		return(true);
	}
}
