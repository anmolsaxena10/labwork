<%-- 
    Document   : ShowColorTagDemo
    Created on : Mar 13, 2018, 9:47:05 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@taglib prefix="c" tagdir="/WEB-INF/tags"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
       <c:showcolor colors="${colors}"/>
    </body>
</html>
