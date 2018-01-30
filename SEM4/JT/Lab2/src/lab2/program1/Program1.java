/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab2.program1;

import java.sql.*;

/**
 *
 * @author user1
 */
public class Program1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws Exception{
        Connection con = DriverManager.getConnection("jdbc:mysql://192.168.29.150/ce107","ce107","ce107");
        
        Statement s = con.createStatement(ResultSet.TYPE_SCROLL_SENSITIVE,ResultSet.CONCUR_UPDATABLE);
        
        ResultSet rs = s.executeQuery("Select * From Student");
        
        System.out.println("Using absolute(2)");
        rs.absolute(2);
        System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3));
        
        System.out.println("Using first()");
        rs.first();
        System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3));
        
        System.out.println("Using isFirst()");
        System.out.println(rs.isFirst());
        
        System.out.println("Using isLast()");
        System.out.println(rs.isLast());
        
        System.out.println("Using last()");
        rs.last();
        System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3));
        
        System.out.println("Using previous()");
        rs.previous();
        System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3));
        
        System.out.println("Using next()");
        rs.next();
        System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3));
        
        System.out.println("Using relative(-5)");
        rs.relative(-5);
        System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3));
        
    }
}
