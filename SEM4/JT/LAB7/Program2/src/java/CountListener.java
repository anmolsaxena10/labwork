
import javax.servlet.ServletContextEvent;
import javax.servlet.ServletContextListener;

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
public class CountListener implements ServletContextListener {

    @Override
    public void contextInitialized(ServletContextEvent sce) {
	Integer count = 0;
	sce.getServletContext().setAttribute("count",count); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void contextDestroyed(ServletContextEvent sce) {
	throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
