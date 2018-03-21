<%-- 
    Document   : index
    Created on : Mar 21, 2018, 9:20:32 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Calculator</title>
    </head>
    <body>
        <h1>Calculator</h1>
        <form action="Calculate.jsp" method="POST">
            <input type="text" name="num1">
            <input type="text" name="op" maxlength="1">
            <input type="text" name="num2">
            <input type="submit" value="Calculate">
        </form>
    </body>
</html>
