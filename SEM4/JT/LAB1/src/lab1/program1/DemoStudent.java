/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab1.program1;
import java.util.Scanner;
/**
 *
 * @author user1
 */
public class DemoStudent {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        if(args.length == 3){
            Student s1 = new Student(Integer.parseInt(args[0]),args[1],Double.parseDouble(args[2]));
            
            System.out.println(s1);
        }
        
        Scanner sc = new Scanner(System.in);
        Student s2 = new Student();
        
        System.out.println("Enter ID: ");
        s2.setID(sc.nextInt());
        
        System.out.println("Enter Name: ");
        sc.nextLine();
        s2.setName(sc.nextLine());
        
        System.out.println("Enter Cpi: ");
        s2.setCPI(sc.nextDouble());
        
        System.out.println(s2);
    }
}
