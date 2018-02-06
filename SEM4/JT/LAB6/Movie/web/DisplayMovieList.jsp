<%-- 
    Document   : DisplayMovieList
    Created on : Jan 31, 2018, 10:05:42 PM
    Author     : user1
--%>

<%@page import="java.util.ArrayList"%>
<%@page contentType="text/html" pageEncoding="UTF-8" errorPage="/error.jsp"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>My movies</title>
    </head>
    <body>
        <h1>List of Movies having Genre <%= request.getParameter("genre") %></h1>
        
        <% ArrayList<String> myMovies = (ArrayList<String>)request.getAttribute("myMovies"); %>
        
        <% for(String movie:myMovies){ 
            out.println("<h3>"+movie+"</h3>");
        }%>
        
    </body>
</html>
