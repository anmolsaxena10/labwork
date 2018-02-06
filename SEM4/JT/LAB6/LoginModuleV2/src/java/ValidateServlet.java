/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.*;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 *
 * @author user1
 */
public class ValidateServlet extends HttpServlet {

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
        
            try {
            try {
                Class.forName("com.mysql.jdbc.Driver");
            } catch (ClassNotFoundException ex) {
                Logger.getLogger(ValidateServlet.class.getName()).log(Level.SEVERE, null, ex);
            }
                
            
                Connection con = DriverManager.getConnection("jdbc:mysql://192.168.29.150:3306/ce107","ce107","ce107");
                PreparedStatement s = con.prepareStatement("Select * from Student where username = ? and password = ?;");
                s.setString(1, request.getParameter("uname"));
                s.setString(2, request.getParameter("pass"));
                
                ResultSet rs = s.executeQuery();

                if(rs.next()){
                    RequestDispatcher rd = request.getRequestDispatcher("WelcomeServlet");
                    HttpSession mySession = request.getSession();
                    rd.forward(request, response);
                }
                else{
                    response.setContentType("text/html;charset=UTF-8");
                    PrintWriter out = response.getWriter();
                    
                    RequestDispatcher rd = request.getRequestDispatcher("/index.html");
                    rd.include(request, response);
                    
                    out.println("Sorry!! Worng Details");
                    out.close();
                }
                
            } catch (SQLException ex) {
                Logger.getLogger(ValidateServlet.class.getName()).log(Level.SEVERE, null, ex);
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