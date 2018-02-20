<%-- 
    Document   : index
    Created on : 20 Feb, 2018, 8:42:11 PM
    Author     : Anmol Saxena
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Calculator</title>
    </head>
    <body>
        <h1>Enter Values</h1><br>
        <form action="result.jsp">
            A: <input type="number" name="a"/><br/>
            B: <input type="number" name="b"/><br/>
            Operator: <input type="text" name="op"><br/>
            <input type="submit">
        </form>
    </body>
</html>
