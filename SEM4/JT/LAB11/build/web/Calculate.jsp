<%-- 
    Document   : Calculate
    Created on : Mar 21, 2018, 9:26:23 PM
    Author     : user1
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@include file="index.jsp"%>
<%@taglib uri="/tlds/calc" prefix="c"%>
<c:calc num1="${param.num1}" num2="${param.num2}" op="${param.op}"></c:calc>

