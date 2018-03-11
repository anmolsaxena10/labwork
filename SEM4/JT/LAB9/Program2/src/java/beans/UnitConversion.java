/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package beans;

import java.io.Serializable;

/**
 *
 * @author user1
 */
public class UnitConversion implements Serializable{
    private String unit1;
    private String unit2;
    private Double value=0.0;
    private Double ans=0.0;

    public String getUnit1() {
        return unit1;
    }

    public void setUnit1(String unit1) {
        this.unit1 = unit1;
    }

    public String getUnit2() {
        return unit2;
    }

    public void setUnit2(String unit2) {
        this.unit2 = unit2;
    }

    public Double getValue() {
        return value;
    }

    public void setValue(Double value) {
        this.value = value;
    }

    public Double getAns() {
        if(unit1!=null && unit1.equals("meter")){
            ans = value*100;
            unit2 = "centimeter";
        }
        else if(unit1!=null && unit1.equals("inch")){
            ans = value*2.5;
        }
        else if(unit1!=null && unit1.equals("celsius")){
            ans = value*9/5 + 32 ;
        }
        return ans;
    }
    
    
    
}
