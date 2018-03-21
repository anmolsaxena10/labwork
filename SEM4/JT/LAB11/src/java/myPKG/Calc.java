/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package myPKG;

import java.io.IOException;
import java.io.Serializable;
import javax.servlet.jsp.JspContext;
import javax.servlet.jsp.JspException;
import javax.servlet.jsp.JspWriter;
import javax.servlet.jsp.tagext.JspFragment;
import javax.servlet.jsp.tagext.JspTag;
import javax.servlet.jsp.tagext.SimpleTagSupport;

/**
 *
 * @author user1
 */
public class Calc extends SimpleTagSupport implements Serializable {
    private String num1;
    private String num2;
    private String op;
    public Calc() {
    }
    public Calc(String num1, String num2, String op) {
        this.num1 = num1;
        this.num2 = num2;
        this.op = op;
    }

    public String getNum1() {
        return num1;
    }

    public String getNum2() {
        return num2;
    }

    public String getOp() {
        return op;
    }
    public void setNum1(String num1) {
        this.num1 = num1;
    }

    public void setNum2(String num2) {
        this.num2 = num2;
    }

    public void setOp(String op) {
        this.op = op;
    }
   

    @Override
    public void doTag() throws JspException, IOException {
        super.doTag();
        JspWriter out = getJspContext().getOut();
        Double n1=Double.parseDouble(num1);
        Double n2=Double.parseDouble(num2);
        Double re=0.0;
        if(op.equals("+")){
            re=n1+n2;
        }
        else if(op.equals("-")){
            re=n1-n2;
        }
        else if(op.equals("*")){
            re=n1*n2;
        }
        else if(op.equals("/")){
            if(n2!=0){
                re=n1/n2;
            }
            else{
                out.println("Can not devide by zero!");
                return;
            }
        }
        else{
            out.println("Enter valid operator!");
        }
        out.println(re.toString());
    }

    @Override
    protected JspFragment getJspBody() {
        return super.getJspBody();
    }

    @Override
    protected JspContext getJspContext() {
        return super.getJspContext();
    }

    @Override
    public JspTag getParent() {
        return super.getParent();
    }

    @Override
    public void setJspBody(JspFragment jspBody) {
        super.setJspBody(jspBody);
    }

    @Override
    public void setJspContext(JspContext pc) {
        super.setJspContext(pc);
    }

    @Override
    public void setParent(JspTag parent) {
        super.setParent(parent);
    }

    @Override
    public String toString() {
        return "Calc{" + "num1=" + num1 + ", num2=" + num2 + ", op=" + op + '}';
    }
    
}
