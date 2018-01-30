/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab2.program2;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

/**
 *
 * @author user1
 */
public class Program2 {
    public static void main(String args[]) throws Exception{
        Connection con = DriverManager.getConnection("jdbc:mysql://192.168.29.150/ce107","ce107","ce107");
        
        Statement s = con.createStatement(ResultSet.TYPE_SCROLL_SENSITIVE,ResultSet.CONCUR_UPDATABLE);
        
        ResultSet rs = s.executeQuery("Select * From Student");
        
        while(rs.next()){
            System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3));
        }
        System.out.println();
        
        rs.first();
        System.out.println("Updating first row with data p q ce");
        rs.updateString(1,"p");
        rs.updateString(2,"q");
        rs.updateRow();
        
        System.out.println();
        rs.beforeFirst();
        while(rs.next()){
            System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3));
        }
    }
}
