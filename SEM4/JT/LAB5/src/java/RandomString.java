/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author user1
 */
public class RandomString {
    static final String ALPHA_NUM = "abcdefghijklmnopqrstuvwxyz1234567890";
    
    public static String getString(){
        int length = 15;
        StringBuilder builder = new StringBuilder();
        while(length-- != 0){
            int ch = (int)(Math.random()*(ALPHA_NUM.length()));
            //System.out.println(ch);
            builder.append(ALPHA_NUM.charAt(ch));
        }
        return builder.toString();
    }
}
