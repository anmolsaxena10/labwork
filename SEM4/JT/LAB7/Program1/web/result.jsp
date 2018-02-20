<%-- 
    Document   : result
    Created on : 20 Feb, 2018, 8:55:21 PM
    Author     : Anmol Saxena
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>

<jsp:useBean class="beans.Calculator" id="calc">
    <jsp:setProperty name="calc" property="*" />
</jsp:useBean>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Result</title>
    </head>
    <body>
        <h1>Your Result</h1>
        <jsp:getProperty name="calc" property="a" /> <jsp:getProperty name="calc" property="op" /> <jsp:getProperty name="calc" property="b" /> = <jsp:getProperty name="calc" property="result" />
    </body>
</html>
