/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Program3;

import com.sun.xml.internal.ws.api.policy.PolicyResolver.ServerContext;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author user1
 */
public class FileDownload extends HttpServlet {

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
        //PrintWriter out = response.getWriter();
        try {
            String fileName = request.getParameter("List");
            ServletContext sc = this.getServletContext();
            String mimeType = sc.getMimeType(fileName);
            
            System.out.println(fileName+" "+mimeType);
            
            if(mimeType == null){
                mimeType = "application/octet-stream";
            }

            response.setContentType(mimeType);
            
            ServletOutputStream sos = response.getOutputStream();
            InputStream is = sc.getResourceAsStream("/WEB-INF/"+fileName);
            
            int c;
            while((c=is.read())!=-1){
                sos.write(c);
            }
            
            response.setHeader("Content-Disposition","attachment;filename="+fileName);
            
            sos.close();
            is.close();
        } finally {            
            //out.close();
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
