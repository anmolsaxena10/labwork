/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package lab1.program1;

/**
 *
 * @author user1
 */
public class Student {
    private int id;
    private String name;
    private double cpi;
    
    public Student(){
        id = 0;
        name = "";
        cpi = 0.0;
    }
    
    public Student(int id, String name, double cpi){
        this.id = id;
        this.name = name;
        this.cpi = cpi;
    }
    
    public void setID(int id){
        this.id = id;
    }
    
    public int getID(){
        return(id);
    }
    
    public void setName(String name){
        this.name = name;
    }
    
    public String getName(){
        return(name);
    }
    
    public void setCPI(double cpi){
        this.cpi = cpi;
    }
    
    public double getCPI(){
        return(cpi);
    }
    
    @Override
    public String toString(){
        return("ID: "+id+", Name: "+name+", CPI: "+cpi);
    }
}
