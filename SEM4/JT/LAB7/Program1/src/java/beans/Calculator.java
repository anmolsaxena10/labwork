/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package beans;

import java.io.Serializable;

/**
 *
 * @author Anmol Saxena
 */
public class Calculator implements Serializable {

    private double a, b, result;
    private String op;

    public double getA() {
	return a;
    }

    public void setA(double a) {
	this.a = a;
    }

    public double getB() {
	return b;
    }

    public void setB(double b) {
	this.b = b;
    }

    public double getResult() {
	switch (op) {
	    case "+":
		result = a+b;
		break;
	    case "-":
		result = a-b;
		break;
	    case "*":
		result = a*b;
		break;
	    case "/":
		result = a/b;
		break;
	    case "%":
		result = a%b;
		break;
	    default:
		break;
	}
	return result;
    }

    public String getOp() {
	return op;
    }

    public void setOp(String op) {
	this.op = op;
    }

}
