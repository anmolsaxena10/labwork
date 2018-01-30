/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Program2;

/**
 *
 * @author user1
 */
public class Counter {
    static int count;
    
    synchronized public static int getCount(){
        return(++count);
    }
}
