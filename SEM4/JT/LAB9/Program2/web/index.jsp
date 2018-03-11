<%-- 
    Document   : index
    Created on : Feb 28, 2018, 9:45:11 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>

<jsp:useBean class="beans.UnitConversion" id="conv"/>
<jsp:setProperty name="conv" property="*"/>

<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>UnitConverter</title>
    </head>
    <body>
        <h1>Unit Converter</h1>
         <select name="measure">
         <option value="length">Length</option>
         <option value="temperature">Temperature</option>
         </select><br>
        <form>
            <input type="number" name="value" value="<jsp:getProperty name='conv' property='value'/>">&nbsp;
            <select name="unit1">
                <option value="meter">Meter</option>
                <option value="inch">Inch</option>
                <option value="celsius">Celsius</option>
            </select>
            = <input type="number" name="ans" value="<jsp:getProperty name='conv' property='ans'/>">&nbsp;
            <select name="unit2">
                <option value="meter">Centimeter</option>
                <option value="inch">Fahrenheit</option>
            </select><br>
            <input type="submit">
        </form>
        
    </body>
</html>
