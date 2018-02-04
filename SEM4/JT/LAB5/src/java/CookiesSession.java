/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.IOException;
import java.io.PrintWriter;
import java.util.HashMap;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author user1
 */
public class CookiesSession extends HttpServlet {

    /**
     * Processes requests for both HTTP
     * <code>GET</code> and
     * <code>POST</code> methods.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        PrintWriter out = response.getWriter();
        try {
            /*
             * TODO output your page here. You may use following sample code.
             */
	    
	    ServletContext sc = getServletContext();
            HashMap<String,Integer> sessions = (HashMap<String,Integer>)sc.getAttribute("sessionHash");
            String sessID;
	    
	    if(sessions==null){
                sessions = new HashMap<String,Integer>();
            }
	
            Cookie cookies[] = request.getCookies();
            Boolean first = true;
	    Cookie myCookie = null;
            int count;
            
	    if(cookies!=null){
		for(Cookie cookie:cookies){
		    if(cookie.getName().equals("session")){
			first = false;
			myCookie = cookie;
			break;
		    }
		}
	    }
            
	    if(first || !sessions.containsKey(myCookie.getValue())){
		count = 1;
		while(true){
                    sessID = RandomString.getString();
                    if(!sessions.containsKey(sessID)){
                        break;
                    }
                }
		myCookie = new Cookie("session", sessID);
	    }
	    else{
		sessID = myCookie.getValue();
		count = sessions.get(sessID)+1;
	    }
	    
	    sessions.put(sessID, count);
	    sc.setAttribute("sessionHash", sessions);
	    
	    response.addCookie(myCookie);
	    //System.out.println(count);
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Servlet CookiesSession</title>");      
            out.println("</head>");
            out.println("<body>");
            out.println("<h1>Servlet CookiesSession<br><br> Count: " + count + "</h1>");
	    out.println("<form method='POST'><input type='submit'></form>");
            out.println("</body>");
            out.println("</html>");
        } finally {            
            out.close();
        }
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /**
     * Handles the HTTP
     * <code>GET</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Handles the HTTP
     * <code>POST</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>
}
