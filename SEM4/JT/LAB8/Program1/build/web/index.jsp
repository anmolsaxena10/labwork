<%-- 
    Document   : index
    Created on : Feb 21, 2018, 9:14:58 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <h1>Hello World!</h1><br>
        <h1><a href="index.jsp?q=login">Login</a></h1><br>
        <h1><a href="index.jsp?q=logout">Logout</a></h1><br>
        <% 
            if(request.getParameter("q") == null || request.getParameter("q").equals("logout")){
                session.setAttribute("logged", null);
                out.println("loggedOut");
            }
            else{
                session.setAttribute("logged", true);
                out.println("loggedIn");
            }
        %>
    </body>
</html>
