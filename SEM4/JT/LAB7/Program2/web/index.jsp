<%-- 
    Document   : index
    Created on : 20 Feb, 2018, 9:02:06 PM
    Author     : Anmol Saxena
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Hits Counter</title>
    </head>
    <body>
        <% application.setAttribute("count",(Integer)application.getAttribute("count")+1); %>
        <h1>Count till now ${count}</h1>
    </body>
</html>
