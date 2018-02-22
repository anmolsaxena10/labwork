/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.PrintWriter;
import java.util.Date;
import javax.servlet.ServletRequestEvent;
import javax.servlet.ServletRequestListener;
import javax.servlet.annotation.WebListener;

/**
 * Web application lifecycle listener.
 *
 * @author user1
 */
@WebListener()
public class NewServletListener implements ServletRequestListener {

    @Override
    public void requestDestroyed(ServletRequestEvent sre) {
        
        Date end = new Date();
        Date start = (Date)sre.getServletRequest().getAttribute("startTimeListener");
        long diff = end.getTime()-start.getTime();
        sre.getServletRequest().getServletContext().log("Process time for"+sre.getServletRequest().getServerName()+" from Listener: "+diff+" ms");
        
        
    }

    @Override
    public void requestInitialized(ServletRequestEvent sre) {
        Date start = new Date();
        sre.getServletRequest().setAttribute("startTimeListener", start);
    }
}
