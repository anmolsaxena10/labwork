<%-- 
    Document   : index
    Created on : Feb 28, 2018, 9:24:19 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/functions" prefix="f"%>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>UpperCase</title>
    </head>
    <body>
        Input: <form><input type="text" name="string"><br><input type="submit"></form>
        <c:forEach var="x" items="${f:split(param.string, ' ')}">
            ${f:toUpperCase(x)}<br>
        </c:forEach>
    </body>
</html>
