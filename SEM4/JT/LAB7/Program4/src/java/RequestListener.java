
import javax.servlet.ServletRequestEvent;
import javax.servlet.ServletRequestListener;

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
public class RequestListener implements ServletRequestListener {

    @Override
    public void requestDestroyed(ServletRequestEvent sre) {
	sre.getServletContext().log("Request completed for: "+sre.getServletRequest().getRemoteAddr());
    }

    @Override
    public void requestInitialized(ServletRequestEvent sre) {
	sre.getServletContext().log("New request from: "+sre.getServletRequest().getRemoteAddr());
    }
}
