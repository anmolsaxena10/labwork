/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package myPKG;

import java.util.Enumeration;
import javax.servlet.jsp.JspException;
import javax.servlet.jsp.JspWriter;
import javax.servlet.jsp.PageContext;
import javax.servlet.jsp.tagext.BodyContent;
import javax.servlet.jsp.tagext.BodyTagSupport;
import javax.servlet.jsp.tagext.Tag;
import javax.servlet.jsp.tagext.TagSupport;

/**
 *
 * @author user1
 */
public class Rev extends BodyTagSupport{

    String str;
    @Override
    public int doAfterBody() throws JspException {
        return super.doAfterBody();
    }

    @Override
    public int doEndTag() throws JspException {
        try{
            JspWriter out = pageContext.getOut();
            str=getBodyContent().getString();
            out.println("->" + new StringBuilder(str).reverse());
        }catch(Exception e){
            System.out.println(e);
        }
        return EVAL_PAGE;
    }

    @Override
    public void doInitBody() throws JspException {
        super.doInitBody();
    }

    @Override
    public int doStartTag() throws JspException {
        str="null";
        return EVAL_BODY_BUFFERED;
    }

    @Override
    public BodyContent getBodyContent() {
        return super.getBodyContent();
    }
    
    
    
}
