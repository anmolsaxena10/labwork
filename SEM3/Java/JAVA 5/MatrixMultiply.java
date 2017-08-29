import java.util.Scanner;

class MatrixMultiply{
	public static void main(String args[]){
		int a[][] = new int[3][3];
		int b[][] = new int[3][3];
		int c[][] = new int[3][3];
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the elements of First array : ");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				a[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Enter the elements of Second array : ");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				b[i][j] = sc.nextInt();
			}
		}
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				for(int k=0;k<3;k++){
					c[i][j] += (a[i][k]*b[j][k]);
				}
			}
		}
		
		System.out.println("The multiplied Array is : ");
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				System.out.print(" "+c[i][j]+" ");
			}
			System.out.println();
		}
	}
}
