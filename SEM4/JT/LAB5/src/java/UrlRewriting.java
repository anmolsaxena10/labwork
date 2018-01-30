/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.IOException;
import java.io.PrintWriter;
import java.util.HashMap;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author user1
 */
public class UrlRewriting extends HttpServlet {

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
            
            int count;
            String sessID = request.getParameter("sessID");
            
            if(sessions==null){
                sessions = new HashMap<String,Integer>();
            }
            
            
            if(sessID==null || (sessID != null && !sessions.containsKey(sessID))){
                while(true){
                    sessID = RandomString.getString();
                    if(!sessions.containsKey(sessID)){
                        break;
                    }
                }
                count = 1;
            }
            else{
                count = sessions.get(sessID)+1;
            }
            
            
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Servlet UrlRewriting</title>");            
            out.println("</head>");
            out.println("<body>");
            out.println("<h1>Servlet UrlRewriting count " + count + "</h1>");
            out.println("<a href='?sessID="+sessID+"'>next</a>");
            out.println("</body>");
            out.println("</html>");
            
            sc.setAttribute("sessionHash", sessions);
            sessions.put(sessID, count);
        }
        catch(Exception e){
            System.out.println(e);
            
        }
        finally {            
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
