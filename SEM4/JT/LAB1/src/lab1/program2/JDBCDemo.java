/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab1.program2;

import java.sql.*;
/**
 *
 * @author user1
 */
public class JDBCDemo {
    public static void main(String args[]) throws SQLException{
        
        //Class.forName("com.mysql.jdbc.Driver");
        
        Connection con = DriverManager.getConnection("jdbc:mysql://192.168.29.150:3306/ce107","ce107","ce107");
        
        Statement s = con.createStatement();
        
        s.executeUpdate("INSERT INTO Student values('a', 'b', 'ce', '1', 'ab');");
        
        ResultSet rs = s.executeQuery("SELECT * FROM Student");
        
        while(rs.next()){
            System.out.println(rs.getString("first_name"));
        }
        
    }
}
