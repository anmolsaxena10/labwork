
import javax.servlet.http.HttpSessionEvent;
import javax.servlet.http.HttpSessionListener;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Web application lifecycle listener.
 *
 * @author Anmol Saxena
 */
public class NewServletListener implements HttpSessionListener {

    @Override
    public void sessionCreated(HttpSessionEvent se) {
	Integer activeCount = (Integer)(se.getSession().getServletContext().getAttribute("activeCount"));
	if(activeCount != null){
	    se.getSession().getServletContext().setAttribute("activeCount",activeCount+1);
	}
	else{
	    se.getSession().getServletContext().setAttribute("activeCount", 1);
	}
    }

    @Override
    public void sessionDestroyed(HttpSessionEvent se) {
	 se.getSession().getServletContext().setAttribute("activeCount",(Integer)(se.getSession().getServletContext().getAttribute("activeCount"))-1);
    }
}
